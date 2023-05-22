#include <iostream>
using namespace std;

int main()
{
    //spiral printing an array
    
    int r = 5;
    int c = 5;
    int arr[5][5] ={ 1,2,3,4,5,
                     6,7,8,9,10,
                     11,12,13,14,15,
                     16,17,18,19,20,
                     21,22,23,24,25 };
    
// printing in original order
    for(int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++ ){
            cout<<arr[i][j]<<"-";
        }
        cout<<endl;
    }

// spiral print

    int count_hr = 0;
    int count_vd = 1;
    int count_vd2 = r-1;
    int count_hl = 1;
    int count_vu = 0;
    
    for (int i = 0; i < (c+r); i++ ){
        cout<<" i = "<<i<<endl;
        if (i%4 == 0){
            cout<<"count_hr = "<<count_hr<<endl;
            for (int j = count_hr; j < c - count_hr ; j ++ ) {  
                // hori - right
                cout<<arr[count_hr][j]<<" ";
            }
            count_hr ++;
        }
        cout<<endl;
        if (i%4 == 1){
            cout<<"count_vd = "<<count_vd<<endl;
            for (int j = count_vd; j < r + 1 - count_vd ; j ++ ) {   
                // vert - down
                //cout<<"j = "<<j;
                cout<<arr[j][count_vd2]<<" ";
            }
            count_vd2 --;
            count_vd ++ ;
        }
        cout<<endl;
        
        //similarly do the rest
        
    }



    return 0;
}
