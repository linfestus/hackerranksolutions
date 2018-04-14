#include <bits/stdc++.h>

using namespace std;

int formingMagicSquare(vector < vector<int> > s) {
    
    vector < vector<int> > vec(3,vector<int>(3));
    
    int minimum = 30000,current;
    
    for(int a=1;a<10;a++){
        for(int b =1;b<10;b++){
            if(b==a)
                continue;
            for(int c=1;c<10;c++){
                if(c==b||c==a){
                    continue;
                }
                for(int d=1;d<10;d++){
                    if(d==c||d==b||d==a)
                        continue;
                    for(int e=1;e<10;e++){
                        if(e==d||e==c||e==b||e==a)
                            continue;
                        for(int f=1;f<10;f++){
                            if(f==e||f==d||f==c||f==b||f==a)
                                continue;
                            for(int g=1;g<10;g++){
                                if(g==f||g==e||g==d||g==c||g==b||g==a)
                                    continue;
                                for(int h=1;h<10;h++){
                                    if(h==g||h==f||h==e||h==d||h==c||h==b||h==a)
                                        continue;
                                    for(int i=1;i<10;i++){
                                        if(i==h||i==g||i==f||i==e||i==d||i==c||i==b||i==a)
                                            continue;
                                        
                                        vec[0][0] = a;
                                        vec[0][1] = b;
                                        vec[0][2] = c;
                                        vec[1][0] = d;
                                        vec[1][1] = e;
                                        vec[1][2] = f;
                                        vec[2][0] = g;
                                        vec[2][1] = h;
                                        vec[2][2] = i;
                                        
                                        if( a+b+c==a+e+i && a+e+i==d+e+f && d+e+f==g+h+i && g+h+i == a+d+g &&                                                                  a+d+g==b+e+h && b+e+h == c+f+i && c+f+i==c+e+g){
                                            current =0;
                                            for(int m=0;m<3;m++){
                                                for(int n=0;n<3;n++){
                                                    current+= abs(vec[m][n]-s[m][n]);
                                                    
                                                }
                                            }
                                            
                                            minimum = min(current,minimum);
                                            
                                        }
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return minimum;
}

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    int result = formingMagicSquare(s);
    cout << result << endl;
    return 0;
}
