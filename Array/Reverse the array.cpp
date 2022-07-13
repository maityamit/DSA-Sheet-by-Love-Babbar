string reverseWord(string str){
    
  //Your code here
  int i=0;
  int j=str.length()-1;
  while(i<j){
      char ch = str[j];
      str[j]=str[i];
      str[i]=ch;
      i++;
      j--;
  }
  return str;
}
