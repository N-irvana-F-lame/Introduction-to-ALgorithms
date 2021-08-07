#include <bits/stdc++.h>
using namespace std;

#define pb push_back

typedef vector<int> vi;


void insertion_sort(vi &v){

    int n = v.size();
    for(int i = 1; i<n; i++){
        int key = v[i];
        // Insert v[i] into sorted sequence v[0 ... i-1]
        int j = i-1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vi v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    
    insertion_sort(v);
    cout << "Sorted Array : ";
    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
