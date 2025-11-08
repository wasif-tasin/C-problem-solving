#include<stdio.h> 
void odd_even(){
    int n; 
    scanf("%d",&n);
    int odd=0,even=0;

    int num[n];
    for (int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    for (int i=0; i<n; i++){
      if(num[i]==1||num[i]%2==1){
        odd++;
      }
      else{
      even++;
      }
    }
    printf("%d %d", even,odd);   

}

int main(){

odd_even();

return 0;
}