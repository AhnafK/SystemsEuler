int main(){
  int ans = 0;
  int pos = 1;
  while(3*pos<=1000){
    ans += 3*pos;
    if(5*pos <= 1000){
      ans += 5*pos;
    }
  }
  printf(ans);
}
