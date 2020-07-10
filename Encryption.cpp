string encryption(string s){
    int size = s.length();
    int row = sqrt(size);
    int col = row;

    if(row*col != size)
        col = row+1;

    string ans;
   
    if(row*col < size)
        row += 1;

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            if(s[i+(j*col)] != NULL)
                ans += s[i+(j*col)];
        }
        ans += ' ';
    }

    return ans;
}
