//
//  main.cpp
//  racecar
//
//  Created by Dario Caric on 10.01.2023..
//

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

struct PosSpeed {
    int position;
    int speed;
    int moves;
    bool runOptionB;
    
    PosSpeed(int init_position, int int_speed, int int_moves, bool int_runOptionB) {
        position = init_position;
        speed = int_speed;
        moves = int_moves;
        runOptionB = int_runOptionB;
    }
};

int racecar(int);
PosSpeed positionA (PosSpeed);
PosSpeed positionR (PosSpeed);
PosSpeed optionA (PosSpeed, int);
PosSpeed optionB (PosSpeed, int);

int main(int argc, const char * argv[]) {

    printf("\nmax moves:%i\n",racecar(5));
    return 0;
}

/*
int dp[10001];
int racecar(int t) {
    if (dp[t] > 0) return dp[t];
    int n = floor(log2(t)) + 1, res;
    if (1 << n == t + 1) {
        dp[t] = n;
        printf("A");
    }
    else {
        dp[t] = racecar((1 << n) - 1 - t) + n + 1;
        for (int m = 0; m < n - 1; ++m)
            dp[t] = min(dp[t], racecar(t - (1 << (n - 1)) + (1 << m)) + n + m + 1);
        printf("R");
    }
    return dp[t];
}
*/

int racecar(int t) {
    
    vector< int> dp( t+1,INT_MAX);
    int r=1;
    for( int i=1; i <= t; i++){
        
        if( i == pow( 2,r) - 1) {
            dp[i]=r;
            r++;
        }
        else {
            int u = pow( 2,r)-1;
            int l = pow( 2,r-1)-1;
            
            for( int j=0; j < r-1; j++){
                dp[i]= min(dp[i], (r-1)+1+1+j+ dp[i-l+pow(2,j)-1]);
            }
            dp[i]=min( dp[i] , r+1+dp[ u- i] );
        }
    }
    return dp[t];

}

/*
int racecar(int target) {
    PosSpeed positionSpeedA = PosSpeed(0,1,0,false);
    PosSpeed positionSpeedB = PosSpeed(0,1,0,false);
    bool runOptionBOnce = true;

    int max = 0;
    while (max < 100) {
        printf("A position:%i  speed:%i  moves:%i  target:%i\n",positionSpeedA.position, positionSpeedA.speed, positionSpeedA.moves, target);
        if (target == positionSpeedA.position) break;
        positionSpeedA = optionA(positionSpeedA, target);
        if (positionSpeedA.runOptionB && runOptionBOnce)  {
            positionSpeedB = PosSpeed(positionSpeedA.position,positionSpeedA.speed,positionSpeedA.moves,false);
            printf("** B position:%i  speed:%i  moves:%i  target:%i\n",positionSpeedB.position, positionSpeedB.speed, positionSpeedB.moves, target);
            runOptionBOnce = false;
        }
        max ++;
    }

    if (positionSpeedA.runOptionB) {
        max = 0;
        while (max < 100) {
            printf("B position:%i  speed:%i  moves:%i  target:%i\n",positionSpeedB.position, positionSpeedB.speed, positionSpeedB.moves, target);
            if (target == positionSpeedB.position) break;
            positionSpeedB = optionB(positionSpeedB, target);
            max ++;
        }
    }

    
    
    return (positionSpeedA.moves < positionSpeedB.moves || !positionSpeedA.runOptionB )? positionSpeedA.moves : positionSpeedB.moves;
}
 */

PosSpeed optionA (PosSpeed positionSpeed, int target) {
    int max =0;
    printf("position:%i  speed:%i  moves:%i  target:%i\n",positionSpeed.position, positionSpeed.speed, positionSpeed.moves, target);

    if (target < positionSpeed.position + positionSpeed.speed) {
        if (positionSpeed.runOptionB) positionSpeed = positionR(positionSpeed);
        else {
            positionSpeed.runOptionB = true;
            return positionSpeed;
        }
    }
    else if (positionSpeed.speed < 0 && (target == (positionSpeed.position - 1))) {
        positionSpeed = positionR(positionSpeed);
        if (target < positionSpeed.position) positionSpeed = positionR(positionSpeed);
        positionSpeed = positionA(positionSpeed);
    }
    else if ((target < positionSpeed.position && positionSpeed.speed > 0) || (target > positionSpeed.position && positionSpeed.speed < 0)) positionSpeed = positionR(positionSpeed);
    else positionSpeed = positionA(positionSpeed);
    return positionSpeed;
}

PosSpeed optionB (PosSpeed positionSpeed, int target) {
    if (positionSpeed.speed < 0 && (target == (positionSpeed.position + positionSpeed.speed * (-1)))) positionSpeed = positionR(positionSpeed);
    else if (positionSpeed.speed < 0 && (target == (positionSpeed.position -1))) {
        positionSpeed = positionR(positionSpeed);
        if (target < positionSpeed.position) positionSpeed = positionR(positionSpeed);
        positionSpeed = positionA(positionSpeed);
    }
    else if ((target < positionSpeed.position && positionSpeed.speed > 0) || (target > positionSpeed.position && positionSpeed.speed < 0)) positionSpeed = positionR(positionSpeed);
    else positionSpeed = positionA(positionSpeed);
    return positionSpeed;
}

PosSpeed positionA (PosSpeed posSpeed) {
    posSpeed.position = posSpeed.position + posSpeed.speed;
    posSpeed.speed = posSpeed.speed * 2;
    posSpeed.moves ++;
    printf("    A: move-%i\n",posSpeed.moves);
    return posSpeed;
}

PosSpeed positionR (PosSpeed posSpeed) {
    if (posSpeed.speed >0 ) posSpeed.speed = -1;
    else posSpeed.speed = 1;
    //printf("        R position:%i  speed:%i\n",posSpeed.position, posSpeed.speed);
    posSpeed.moves ++;
    printf("    R: move-%i\n",posSpeed.moves);
    return posSpeed;
}
