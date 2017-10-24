#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <string.h>
#define MAX 105
using namespace std;

int main(){
    char input[MAX][MAX];
    int cnt = 0;
    int largest = 0;
    while( gets(input[cnt] )){
        int length = strlen(input[cnt]);
        largest = max(largest,length);
        cnt++;
    }
    for(int i = 0; i<largest ;i++){
        for(int j = cnt-1 ; j>=0 ;j-- ){
            if( i>= strlen(input[j]))
                cout<<" ";
            else
                cout<<input[j][i];
        }
        cout<<endl;
    } 
}