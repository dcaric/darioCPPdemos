//
//  main.cpp
//  AddTwoNumbers
//
//  Created by Dario Caric on 09.11.2022..
//

#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;


 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);


int main(int argc, const char * argv[]) {
    vector<int> l1 = {9,9,9,9,9,9,9};
    vector<int> l2 = {9,9,9,9};

    
    ListNode *a = (ListNode *)malloc(sizeof(ListNode));
    ListNode *firsta = a;
    for (int i=0; i<l1.size(); i++) {
        a->val = l1[i];
        ListNode *next = (ListNode *)malloc(sizeof(ListNode));
        if (i == l1.size()-1) a->next = nullptr;
        else a->next = next;
        a = next;
    }
    
    
    ListNode *b = (ListNode *)malloc(sizeof(ListNode));
    ListNode *firstb = b;
    for (int i=0; i<l2.size(); i++) {
        b->val = l2[i];
        ListNode *next = (ListNode *)malloc(sizeof(ListNode));
        if (i == l2.size()-1) b->next = nullptr;
        else b->next = next;
        b = next;
    }
    

    ListNode* result = addTwoNumbers(firsta, firstb);
    
    printf("[");
    while (result != nullptr) {
        printf("%d,", result->val);
        result = result->next;
    }
    printf("]\n");

    
    return 0;
}



ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    ListNode *c = new ListNode();
    ListNode *firstc = c;
    
    int carry = 0;
    int sum = 0;
    while (l1 != nullptr || l2 != nullptr) {
        int a = l1 != nullptr ? l1->val : 0;
        int b = l2 != nullptr ? l2->val : 0;
        printf("a=%d  b=%d  carry=%d\n", a, b, carry);
        sum = a + b + carry;
        printf("sum=%d \n", sum);

        if (sum >= 10) {
            carry = sum / 10;
            c->val = sum - carry * 10;
        } else {
            carry = 0;
            c->val = sum;
        }
        printf("cVal=%d  carry=%d\n", c->val, carry);
    
        if (l1 != nullptr) l1 = l1->next;
        if (l2 != nullptr) l2 = l2->next;
        
        ListNode *next = new ListNode();
        c->next = next;
        
        if (l1 == nullptr && l2 == nullptr) {
            if (carry > 0) {
                c = next;
                c->val = carry;
                c->next = nullptr;
            } else c->next = nullptr;
        }
        else c = next;
        printf("\n");
       
    }
    
    
    
    return firstc;
}



