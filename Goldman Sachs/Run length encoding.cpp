string encode(string src)
{     
  //Your code here 
  string ans="";
  int count=1;
  for(int i=0;i<src.size();i++)
  {
      if(src[i]==src[i+1])
      {
          count++;
          continue;
      }
      ans=ans+src[i]+to_string(count);
      count=1;
  }
  return ans;
}
