// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: ALL TEN CIPHERS.cpp
// Last Modification Date: 3/5/2018
// Author1 and ID and Group: A.MORSI   20170149
// Author2 and ID and Group: A.HOSNEY  20170144
// Author3 and ID and Group: A.REDA    20170145
// Teaching Assistant: ENG. Mohammed Atta & Khadiga
// Purpose:Ciphering and diciphering in ten different ways


#include <bits/stdc++.h>
using namespace std;
int method_num;


//*******************************METHOD NUMBER 9***********************************************//
void cipher9 ()
{  cout<<"what do you like to do today ?"<<endl;
    cout<<"1- Cipher a message"<<endl<<"2- Decipher a message"<<endl<<"3- End"<<endl;
    cout<<"enter your choose :";
    int arr[1000];
    int c_d_choice;
    cin>>c_d_choice;
    if (c_d_choice==1){
    int i,key,n,m,k,z,l,c,b;
    string text1,text2;
    cout<<"enter the key: ";
    cin>>key;
    cout<<"the text : ";
    cin>>text1;
    z=1;
    i=0;
    k=0;
    c=0;
    n=(2*key)-2;
    m=n;
    l=text1.length();
    while(z==1){
     if(i>=l){
        key-=1;
        k++;
        i=k;
        n-=2;
        c=0;

        if(n<2){
            n=m;
        }

        }

    for(;i<l;i+=n){
        char x;

        x=text1[i];
        text2+=x;
        c++;

        if(c>=2 && (m-n)!=0 ){
            char y;
            b=m-n;
            if(i+b<l){
            i+=b;
            y=text1[i];
            text2+=y;

            }

       }




    }
    if(key==1){

        cout<<endl<<"cipher text -> "<<text2<<endl;
        method_num=10;
        break;

    }
    }
    }

    if(c_d_choice==2){
    int i,key,n,m,k,z,l,c,b,x,q,g,a[100];
    string text1,text2;
    cout<<"enter the key: ";
    cin>>key;
    cout<<"the text : ";
    cin>>text1;
    z=1;
    i=0;
    k=0;
    c=0;
    x=0;
    q=0;
    g=-1;
    n=(2*key)-2;
    m=n;
    l=text1.length();
    while(z==1){
     if(i>=l){
        key-=1;
        k++;
        i=k;
        n-=2;
        c=0;

        if(n<2){
            n=m;
        }

        }

    for(;i<l;i+=n){

        a[x]=i;

        x++;
        c++;



        if(c>=2 && (m-n)!=0 ){

            b=m-n;
            if(i+b<l){
            i+=b;
            a[x]=i;
            x++;
            }
       }
    }
    while(key==1){
        g++;
        if(g==l){
        cout<<endl<<"deciphered text -> "<<text2<<endl;
        method_num=10;
        break;
        }
        else if(a[q]==g){
            int s;
            s=q;
            text2+=text1[s];
            q=0;
        }
        else {
            g--;
            q++;
        }

    }
    }
    }
    while(c_d_choice==3){
        break;
    }
}

//*******************************METHOD NUMBER 8***********************************************//

void cipher8 ()
{cout<<"what do you like to do today ?"<<endl;
    cout<<"1- Cipher a message"<<endl<<"2- Decipher a message"<<endl<<"3- End"<<endl;
    cout<<"enter your choose :";
    int e;
    cin>>e;

    if (e==1)
    {
    char y;
    char x;
    char z;
    char q;
    string s,s1,s2;
    cout<<"enter your text:";
    cin>>s;
    cout<<"enter your key:";
    cin>>x;
    for(int i=0;i<s.length();i++)
    {

        z=s[i];
        y= x ^ z;
        s1+=y;

    }

    cout<<s1<<endl;

    for(int c=0;c<s.length();c++)
    {
        q=s1[c];
        if(int (q) <= 15)
        {
            cout<<hex<<"0";

        }
        cout<<hex<<int (q);
    }
    }

    if(e==2)
    {
        int E;
        cout<<"1-HEXA"<<endl<<"2-TEXT"<<endl;
        cout<<"enter your choice:";
        cin>>E;
        if(E==2)
        {
        char y;
        char x;
        char z;
        char q;
        string s,s1,s2;
        cin>>s;
        cin>>x;
        for(int i=0;i<s.length();i++)
        {

            z=s[i];
            y= x ^ z;
            s1+=y;

        }

        cout<<s1<<endl;

        for(int c=0;c<s.length();c++)
        {
            q=s1[c];
            if(int (q) <= 15)
            {
                cout<<hex<<"0";

            }
            cout<<hex<<int (q);
        }
        }

        if(E==1)
        {
            string s,s1,s2,s3;
            int i;
            char x;
            cout<<"enter your text:";
            cin>>s;
            cout<<"enter your key:";
            cin>>x;
            int x1=int(x);
            for(int i=0;i<s.length();i+=2)
            {
                int k=0;
                if(s[i]>='0' && s[i]<='9')
                {
                    int y;
                    s1="";
                    s1+=s[i];
                    stringstream geek(s1);
                    geek>>y;
                    k+=(y*16);
                }
                else if (s[i]=='a' || s[i]=='A'){
                    k+=(10*16);
                }
                else if (s[i]=='b' || s[i]=='B'){
                    k+=(11*16);
                }
                else if (s[i]=='c' || s[i]=='C'){
                    k+=(12*16);
                }
                else if (s[i]=='d' || s[i]=='D'){
                    k+=(13*16);
                }
                else if (s[i]=='e' || s[i]=='E'){
                    k+=(14*16);
                }
                else if (s[i]=='f' || s[i]=='F'){
                    k+=(15*16);
                }

                if(s[i+1]>='0' && s[i+1]<='9')
                {
                    int t;
                    s2="";
                    s2+=s[i+1];
                    stringstream geek2(s2);
                    geek2>>t;

                    k+=t;
                }
                else if (s[i+1]=='a' || s[i+1]=='A'){
                    k+=10;
                }
                else if (s[i+1]=='b' || s[i+1]=='B'){
                    k+=11;
                }
                else if (s[i+1]=='c' || s[i+1]=='C'){
                    k+=12;
                }
                else if (s[i+1]=='d' || s[i+1]=='D'){
                    k+=13;
                }
                else if (s[i+1]=='e' || s[i+1]=='E'){
                    k+=14;
                }
                else if (s[i+1]=='f' || s[i+1]=='F'){
                    k+=15;
                }

                int y1=k^x1;
                s3+=char(y1);
                if(y1<=15){
                        cout<<0;
                }
                cout<<hex<<y1;


           }



           cout<<endl<<"deciphered TEXT ->"<<s3<<endl;


        }

        }

}

//***************************************METHOD NMBER 7********************************************************//

void cipher7 ()
{

    while (true)
    {
        cout<<""<<endl;
        cout<<"         WELCOM TO DECTRYPTION CLUB"<<endl;
        cout<<""<<endl;
        cout<<"ENTER 'E' TO INCRYPTION OR ENTER 'D' TO DECRYPTION " <<endl;
        string f ;
        getline(cin,f);
        if(f == "E")


        {


            string x ;
    string fo [26]={".- ","-... ","-.-. " ,"-.. ",". ","..-. ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ","-. ","--- ",".--. "  ,   "--.- "    , ".-. ",     "... "   ,  "- "    , "..- "    , "...- "    , ".-- "    , "-..- "  ,  "-.-- "     ,"--.. "} ;
    char st [26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    getline(cin,x);


    for (int i =0 ; i<x.length(); i=i+1 )



    {

        if (isspace(x[i]))
        {
            cout<<"   ";
        }

        else
        {
            for (int k = 0 ; k < 27 ; k=k+1)

        {
            if (x[i]==st[k])
            {
                cout<<fo[k];
            }
        }

        }


    }
    cout<<""<<endl;

        }
        else
        {
            string x ;
    string s ;
    int detector;
    int co = 0 ;
    string t [26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--."  ,   "--.-"    , ".-.",     "..."   ,  "-"    , "..-"    , "...-"    , ".--"    , "-..-"  ,  "-.--"     ,"--.."};
    char   y [26] = {'a','b','c','d','e','f','g','h' ,'i' ,'j' ,'k','l','m','n' ,'o' ,'p', 'q', 'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x'  ,'y' ,'z'};
    int a ;
    a=0;
    getline(cin,s);
    s=s+' ' ;

    x="" ;

    for(int i=a  ;   i<= s.length() ; i=i+1)
    {
        if(s[i]!=' ')
        {
            x=x+s[i];
        }
        else

        {
            if(s[i+1]==' ' && s[i+2]==' ')
                detector = 1;

            for(int i = 0 ; i<26 ; i=i+1)
                  {

                      if (x==t[i])
                        cout<<y[i];
                  }
            x="";
            if (detector==1)
            {
                cout<<" " ;
                detector = 0 ;
            }
            continue;

        }
    }


cout<<""<<endl;

        }

    }

  method_num=10;

}




//***************************************METHOD NMBER 6********************************************************//

void cipher6 ()
{ int key_array[6];
    char matrix[5][5];
    char letter ='A';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if (letter=='W')
            {
                letter++;
            }

            matrix[i][j]=letter++;

        }
    }

    cout << "Enter 1 if you want a cipher or 2 if you want to dicipher";
    int cases;
    cin >> cases;

    if (cases ==1)
    {
        cout << "Pls Enter your key : ";
    string key;
    cin >> key;
    cin.ignore();
    cout << "pls enter your message : ";
    string msg;
    getline(cin,msg);
        for(int i=0;i<msg.length();i++)
        { int index;
            if (msg[i]>='a'&&msg[i]<='z')
            {
                index =msg[i]-'a';
                cout << key[index/5] << key[index%5];
            }
            else if (msg[i]>='A'&&msg[i]<='Z')
            {
                index=msg[i]-'A';
                cout << key[index/5] << key[index%5];
            }
            else
            {
                cout << msg[i];
                continue;
            }

        }
    }
    else
    {

        cout << "Pls Enter your key(each integer is seprated : " << endl;
        for(int i=0;i<5;i++)
        {int x;
            cin >> x ;
            if(x>5)
            {
                cout << "Wrong input ,pls each digit is separated ";
                i--;
                continue;
            }
             key_array[x]=i;
        }

    cin.ignore();
    cout << "pls enter your message : ";
    string msg;
    getline(cin,msg);
        for(int i=0;i<msg.length();)
        {
            if(msg[i]<'1'||msg[i]>'5')
            {
                cout << msg[i];
                i++;
                continue;
            }
            else if(msg[i]==' ')
            {
                continue;
            }
            else
            {

              int r=int(msg[i]-'0'),c=int(msg[i+1]-'0');
              r=key_array[r];c=key_array[c];
              cout << matrix[r][c];
             i+=2;

            }



    }
    }


}

//***************************************METHOD NMBER 5********************************************************//

void cipher5 ()
{ while (true)
    {


    vector <char> state2 ;

    string detector ;
    string key ;
    string gett;



    cout<<"PLEASE ENTER 1 TO CIPHER OR INPUT 0 TO DESIPGHER :" ;
    getline(cin , detector) ;
    cout<<"please enter the key you want to use : "<<
    getline(cin , key) ;
   // cout<<"please enter the message to use it  : "<<
    getline(cin , gett) ;



    char state[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;
    for (int i = 0 ; i<key.size() ; i=i+1)
    {
        state2.push_back(key[i]);

    }

    for(int i =0 ; i<26 ; i=i+1)
    {
        if(state[i]!= key[0] &&state[i]!= key[1] &&state[i]!= key[2] &&state[i]!= key[3] &&state[i]!= key[4] )

        {
            state2.push_back(state[i]);
        }
    }



if (detector=="1")
{
    //=============================================== DECRYPTION =======================
        for (int i = 0 ;  i < gett.length() ; i=i+1 )

        {
            if(isspace(gett[i]))
            {
                cout<<" ";

            }

            else
            {
                for (int k = 0 ; k<27 ; k++)

                if(gett[i]==state[k])
            {
                cout<<state2[k] ;
            }

            }

        }
}

else
{
    //=============================================== INCRYPTION =======================


           for (int i = 0 ;  i < gett.length() ; i=i+1 )

        {
            if(isspace(gett[i]))
            {
                cout<<" ";

            }

            else
            {
                for (int k = 0 ; k<27 ; k++)

                if(gett[i]==state2[k])
            {
                cout<<state[k] ;
            }

            }

        }
}
cout<<" "<<endl;
    }

}

//***************************************METHOD NMBER 4********************************************************//

void cipher4 ()
{vector<char>w;
char arr[27] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 string ar[27]={"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab"};
string s;
int z;
int decimal=0,counter=0;
while(true){
cout<<"welcome"<<endl;
cout<<"choose a number"<<endl;
cout<<"1-Cipher"<<endl;
cout<<"2-Decipher"<<endl;
cout<<"3-end"<<endl;
cin>>z ;
if(z==1){
  cout<<"ENTER THE MESSAGE"<<endl;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      for(int j=0;j<26;j++)
      {
         if(s[i]==arr[j])
         {
             cout<<ar[j];


         }
      }
  }
cout<<endl; }
  else if(z==2)
  {
    cout<<"ENTER THE MESSAGE"<<endl;
     cin>>s;
     for(int i=1 ;i<=(int)s.size();i++)
     {
         if((s[i-1]=='b') || (s[i-1]=='a'))
         {
             if((s[i-1]=='b'))
             {
                 decimal=decimal+pow(2,4-counter);
             }
             if((i%5)==0)
             {
                 cout<<arr[decimal];
                 decimal=0;
             }
         }
       counter++;
       if(i%5==0)
       {
           counter=0;
       }
     }


  }
  else if (z==3)
  {
      break;
  }
}

 method_num=10;

}

//***************************************METHOD NMBER 3********************************************************//

void cipher3 ()
{char arr[27] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string s;
while (true){
cout<< "wlcome"<<endl;
cout<<"choose a number"<<"\n"<<"1-cipher"<<"\n"<<"2-decipher"<<"\n"<<"3-end"<<endl;
int q;
cin>>q;
if(q==1){
cout<<"Enter the message"<<endl;
cin>>s;
for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
int y=0;
 for(int i=0;i<s.size();i++)
 {
     for(int j=0;j<26;j++)
     {
         if(s[i]==arr[j])
         {
             y=j+13;
             if(y>25)
             {
              y=y-25;
              cout<<arr[y-1]<<endl;
              y=0;
             }
            else{

            cout<<arr[y]<<endl;
             y=0;
            }
             }



     }
 }
}

     else if (q==2)
     {
         cout<<"Enter the message"<<endl;
cin>>s;
for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
int y=0;
 for(int i=0;i<s.size();i++)
 {
     for(int j=0;j<26;j++)
     {
         if(s[i]==arr[j])
         {
             y=j+13;
             if(y>25)
             {
              y=y-25;
              cout<<arr[y-1]<<endl;
              y=0;
             }
            else{

            cout<<arr[y]<<endl;
             y=0;
            }
             }



     }
 }
     }
 else if(q==3)
 {
     break;
 }

}
  method_num=10;


}

//***************************************METHOD NMBER 2********************************************************//

void cipher2 ()
{int x;
int y,z;
while (true) {
cout<<"choose a number"<<"\n"<<"1-cipher"<<"\n"<<"2-decipher"<<"\n"<<"3-end"<<endl;
cin>>z;
cin.ignore();
string s;
if (z==1){
cout<<"Enter The Message"<<endl;
getline(cin,s);
for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
for(int i=0;i<s.length();i++)
{ if(int(s[i])==32)
{
    cout<<" ";

}
    if(int(s[i])>=65 && int (s[i])<=90)

{
   x=65+(25+(65-int(s[i])));
   cout<<char(x);

}


else if (int(s[i])>=97 && int(s[i])<=122)
{
    y=97+(25+97-int(s[i]));
    cout<<char(y);

}


}
}
  else if(z==2)
  {
      cout<<"Enter The Message"<<endl;

getline(cin,s);
for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
for(int i=0;i<s.length();i++)
{ if(int(s[i])==32)
{
    cout<<" ";

}
    if(int(s[i])>=65 && int (s[i])<=90)

{
   x=65+(25+(65-int(s[i])));
   cout<<char(x);

}



  else if (int(s[i])>=97 && int(s[i])<=122)
{
    y=97+(25+97-int(s[i]));
    cout<<char(y);

}




}
  }
  else if (z==3)
  {
      break;
  }
  cout<<endl;
}

  method_num=10;


}

//***************************************METHOD NMBER 1********************************************************//

void cipher1()
{char arr[27] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string s;
while(true){
cout<<"Welcome"<<endl;
cout<<"choose a number1"<<"\n"<<"1-cipher"<<"\n"<<"2-decipher"<<"\n"<<"3-end"<<endl;
int q;
cin>>q;
if(q==1){
cout<<"Enter The message"<<endl;
cin>>s;
for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
int x,y;
char z;
cout<<"Enter The number of Shifts"<<endl;
cin>>x;
cout<<"Enter The Direction (R/L)"<<endl;
cin>>z;
for(int i=0;i<s.size();i++)
{
    for(int j=0;j<26;j++)
    {
        if(s[i]==arr[j])
        {
            if(z=='R')
            {
                y=j+x;
                if(y>25)
                {
                    y=y-25;
                    cout<<arr[y-1]<<endl;
                    y=0;

                }
                else
                {
                    cout<<arr[y]<<endl;
                    y=0;
                }

            }

        else if(z=='L')
        {
            y=j-x;
            if(y<0)
            {
                y=y+25;
                cout<<arr[y+1]<<endl;
                y=0;

            }
            else
            {
                cout<<arr[y]<<endl;
                y=0;
            }
        }
                }
    }

}
}
   else if (q==2)
   {
    cout<<"Enter The message"<<endl;
cin>>s;
for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
int x,y;
char z;
cout<<"Enter The number of Shifts"<<endl;
cin>>x;
cout<<"Enter The Direction (R/L)"<<endl;
cin>>z;
for(int i=0;i<s.size();i++)
{
    for(int j=0;j<26;j++)
    {
        if(s[i]==arr[j])
        {
            if(z=='R')
            {
                y=j+x;
                if(y>25)
                {
                    y=y-25;
                    cout<<arr[y-1]<<endl;
                    y=0;

                }
                else
                {
                    cout<<arr[y]<<endl;
                    y=0;
                }

            }

        else if(z=='L')
        {
            y=j-x;
            if(y<0)
            {
                y=y+25;
                cout<<arr[y+1]<<endl;
                y=0;

            }
            else
            {
                cout<<arr[y]<<endl;
                y=0;
            }
        }
                }
    }

}
   }

  else if (q==3)
  {
      break;
  }

}

    method_num=10;


}

//***************************************METHOD NMBER 0********************************************************//

void cipher0 ()
{char arr[27] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string s ;
int z,a,b,c,y,x;
cout<<"choose a number"<<"\n"<<"1-cipher"<<"\n"<<"2-decipher"<<"\n"<<"3-end"<<endl;
cin>>z;
cout<<"Enter The key which satisfy The Equ. '(a * c) mod 26 = 1' "<<endl;
cout<<"(1) a = "<<endl;
cin>>a;
cout<<"(2) b =" <<endl;
cin>>b;
cout<<"(3) c = "<<endl;
cin>>z;
cin.ignore();
while (true){
 if ((a * c) % 26 == 1) {
 if(z==1){
   cout<< "Enter The message"<<endl;
  getline(cin,s);
 for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
   for(int i=0;i<s.size();i++)
   {
       for(int j=0;j<26;j++)
       {
           if(s[i]==arr[j])
           {
               x=(((a*j) + b) % 26) ;
               cout<<arr[x];
                x=0;

           }
       }
   }
 }
 else if(z==2){
cout<< "Enter The message"<<endl;
 getline(cin,s);
 for (int k=0;k<s.length();k++)
{
    s[k]=toupper(s[k]);
}
  for(int k=0;k<s.size();k++)
  {
      for(int p=0;p<26;p++)

      { if(s[k]==arr[p]){
          y= ((c * (p - b)) % 26);
          cout<<arr[y];
          y=0;
      }
      }
  }
 }
 else if (z==3 )
 {
     break;
 }
 }
}

  method_num=10;


}

//<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>//

int main()
{
 while (true)
 {
  cout<<"WELCOME TO CIPHER AND DECIPHER CLUB"<<endl;
  cout<<"Ahlan ya user ya habibi."<<endl;
  cout<<">> you can enter number any method you want to use it  <<"<<endl;
  cout<<" 0  -> Affine Cipher "<<endl;
  cout<<" 1  -> Caesar Cipher "<<endl;
  cout<<" 2  -> Atbash Cipher "<<endl;
  cout<<" 3  -> ROT13 Cipher "<<endl;
  cout<<" 4  -> Baconian Cipher "<<endl;
  cout<<" 5  -> Simple Substitution Cipher "<<endl;
  cout<<" 6  -> Polybius Square Cipher "<<endl;
  cout<<" 7  -> Morse Code "<<endl;
  cout<<" 8  -> XOR Cipher "<<endl;
  cout<<" 9  -> Rail-fence Cipher "<<endl;
  cout<<" 10 -> End "<<endl;
  cout<<"your choice :";
  cin>>method_num;

  if (method_num==0)
  {
    cipher0() ;
  }
  if (method_num==1)
  {
    cipher1() ;
  }
  if (method_num==2)
  {
    cipher2() ;
  }
  if (method_num==3)
  {
    cipher3() ;
  }
   if (method_num==4)
  {
    cipher4() ;
  }
  if (method_num==5)
  {
    cipher5() ;
  }
  if (method_num==6)
  {
    cipher6() ;
  }
  if (method_num==7)
  {
    cipher7() ;
  }
  if (method_num==8)
  {
    cipher8() ;
  }
  if (method_num==9)
  {
    cipher9() ;
  }
  if (method_num==10)
  {
      return 0;

  }
  else {
    cout<<"please choose right number to use any method you want and showed for you in upper screen "<<endl;
    cin>>method_num;
    continue;
  }


 }
 return 0;


}
