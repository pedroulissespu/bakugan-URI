#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int r;
    int i;

    while( cin >> r, r != 0){
        int m[r+1], l[r+1];
        m[r] = 0, l[r] = 0;

        for(i = 0; i < r; i++) {
            cin >> m[i];
            }

        for(i =0; i < r; i++){
            cin >> l[i];
            }
        int cm = 0 ;
        int cl = 0 ;
        int am, al ;
        int cam = 1 ;
        int cal = 1;

        bool b = true;

        for(i = 0; i < r; i++){
            cm += m[i];
            cl += l[i];
            am = m[i];
            al = l[i];
            if(b){
                if(am == m[i+1]){
                    cam++;
                }
                if(al == l[i+1]){
                    cal++;
                }
                if(am != m[i+1]){
                    cam = 1;
                }
                if(al != l[i+1]){
                    cal = 1;
                }
                if(cam == 3 && cal == 3){
                    b = false;
                    }
                if(cam == 3 && cal < 3){
                    cm +=30;
                    b = false;
                }
                if(cal == 3 && cam < 3){
                    cl += 30;
                    b = false;
                }
            }
        }
        if(cm > cl){
            cout << "M" << endl;
        }
        if(cl > cm){
            cout << "L" << endl;
        }
        if(cm == cl){
            cout << "T" << endl;
            }
    }
    return 0;
}
