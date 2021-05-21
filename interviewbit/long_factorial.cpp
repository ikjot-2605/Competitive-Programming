int multiply(int x, int res[],int res_size){
    int carry=0;
    for(int i =0;i<res_size;i++){
        int prod = res[i]*x+carry;
        res[i] = prod%10;
        carry=prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
string Solution::solve(int A) {
    int res[1000];
    res[0] =1;
    int res_size = 1;
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
    string s = "";
    for(int i =0;i<res_size;i++){
        s.push_back(res[i]+48);
    }
    return s;
}