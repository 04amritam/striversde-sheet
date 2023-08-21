vector<int> Solution::repeatedNumber(const vector<int> &A) {
   long long n=A.size();

long long s1=n*(n+1)/2;
long long s2=n*(n+1)*(2*n-1)/6;
long long sum1=0,sum2=0;
long long s1diff;
long long s2diff;
for(long long  i=0;i<n;i++){
    sum1=sum1+(long long )A[i];
    sum2=sum2+((long long) A[i]*(long long) A[i]);
}
s1diff=s1-sum1;//x-y
s2diff=s2-sum2;//x^2-y^2
long long s3add=s2diff/s1diff;//x+y
long long a,b;
a=(s1diff+s3add)/2;
b=s3add-a;
return {(int(a),int(b))};
}
