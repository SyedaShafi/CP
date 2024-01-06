#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, i, j, cnt=0, k1=0, k2=0;
        cin>>n>>m;
        char a[n][m], ans1[n][m], ans2[n][m];

        for(i=0;i<n; i++){
            for(j=0; j<m; j++){
                cin>>a[i][j];

                if(a[i][j] != '.')
                {
                    cnt++;
                }
            }
        }

        for (i=0; i<n; i++)
        {
            for(j=0; j<m; j++){
                if(i%2 == 0){
                    if(j%2 == 0){
                        ans1[i][j] = 'W';
                    }
                    else{
                        ans1[i][j] = 'R';
                    }
                }
                else{
                    if(j%2 == 0){
                        ans1[i][j] = 'R';
                    }
                    else{
                        ans1[i][j] = 'W';
                    }
                }
            }
        }

        for (i=0; i<n; i++)
        {
            for(j=0; j<m; j++){
                if(i%2 == 0){
                    if(j%2 == 0){
                        ans2[i][j] = 'R';
                    }
                    else{
                        ans2[i][j] = 'W';
                    }
                }
                else{
                    if(j%2 == 0){
                        ans2[i][j] = 'W';
                    }
                    else{
                        ans2[i][j] = 'R';
                    }
                }
            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(ans1[i][j] == a[i][j]){
                        k1++;
                }
            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(ans2[i][j] == a[i][j]){
                        k2++;
                }
            }
        }

        if(cnt>0 && (k1==cnt || k2==cnt)){
            cout<<"YES\n";
            for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                    if(k1 == cnt){
                       cout<<ans1[i][j];
                    }
                    else if(k2 == cnt) cout<<ans2[i][j];
                }
                cout<<"\n";
            }
        }

       else if(cnt == 0){
            cout<<"YES\n";
            for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                   cout<<ans2[i][j];
                }
                cout<<"\n";
            }
        }

        else{
            cout<<"NO\n";
        }
    }
}
