
/*Find Displacement: Given a long route containing
N,S,E,W directions, find the shortest path to
reach the location.

Sample Input:
SNNNEWE

Sample Output :
NNE
*/

#include <iostream>
using namespace std;

int main() {
    int x = 0,y=0;
    char path[100];
    cin.getline(path,100);

    for(int i=0; i< strlen(path);i++){
        if(path[i]=='N')
            y++;
        else if(path[i]=='S')
            y--;
        else if(path[i]=='E')
            x++;
        else if(path[i]=='W')
            x--;
    }

    cout<<"coordinates: ("<<x<<","<<y<<")"<<endl;

    for(int i=y; i!=0;){
        if(i>0)
        {
            cout<<"N";
            i--;
        }    
        if(i<0)
        {
            cout<<"S";
            i++;
        } 
        
    }
    for(int i=x; i!=0;){
        if(i>0)
        {
            cout<<"E";
            i--;
        }    
        if(i<0)
        {
            cout<<"W";
            i++;
        } 
        
    }
    cout<<endl;

    return 0;

}


