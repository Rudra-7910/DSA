#include<iostream>
#include<vector>            //practiced
using namespace std;
int main() 
{
    int count=0;
    int element;
    vector<int>a={1,2,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,4,6,6};
    for(int i=0;i<a.size();i++)
    {
        if(count==0)    //cancelling ho gyi mtlv sb fir , nya candiate lenge , 
        //
        {
            element=a[i];
            count=1;
        }
        else if (element==a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
int freq = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == element)
            freq++;
    }

    if (freq > a.size() / 2)
        cout << element << " is the majority element";
    else    
        cout << "No majority element";
}


// Moore’s Voting Algorithm me hum array {1,3,4,5,6} ke saath 
// kaam karte hain. Shuruat me count = 0 hota hai, jiska matlab 
// hota hai ki abhi koi candidate select nahi hua. Jaise hi hum first element 1 par aate hain aur count == 0 
// hota hai, hum 1 ko candidate maan lete hain aur count = 1 kar dete hain. Agla element 3 candidate se different hota hai, 
// isliye count-- hota hai aur count = 0 ho jaata hai, matlab dono ek-dusre ko cancel kar 
// dete hain. Phir next element 4 par count == 0 hone ki wajah se 4 naya candidate 
// ban jaata hai aur count = 1 ho jaata hai. Isi tarah 5 aane par count phir se 0 ho jaata hai,
//  aur last element 6 par count == 0 hone ki wajah se 6
//  final candidate ban jaata hai. Is poore process me 
//  different elements pair banakar cancel hote jaate hain aur jo
//   element last me bachta hai, wahi Phase-1 ka candidate hota hai. Lekin ye candidate zaroori nahi ki majority ho, 
//   isliye Phase-2 me hum us candidate ki actual frequency count karte hain aur check karte hain 
//   ki kya woh n/2 se zyada baar aaya hai ya nahi. Is example me 6 sirf ek baar aata hai, jo n/2 se zyada nahi hai, 
//   isliye final result hota hai ki array me koi majority element nahi hai.        