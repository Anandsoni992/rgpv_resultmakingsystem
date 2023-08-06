#include<iostream> 
#include<vector> 
using namespace std ; 
float rounde(float var)
{

    float value = (int)(var * 100 + .5);

    return (float)value / 100;
}
int grade(int x) { 
if(x>90 && x<=100) 
return 10 ; 
else if (x>80 && x<=90) { 
return 9 ; }
else if (x>70 && x<=80) 
return 8 ; 
else if(x>60 && x<=70) 
return 7; 
else if (x>50 && x<=60) 
return 6 ; 
else if (x>40 && x<=50) 
return 5 ; 
else if (x>33 && x<=40)
return 4 ;
else 
return 0 ; 
}  
int gradep(int x) { 
if(x>45 && x<=50)  
return 10 ; 
else if (x>40&& x<=45) 
return 9 ; 
else if (x>35&& x<=40) 
return 8 ; 
else if(x>30&& x<=35) 
return 7; 
else if (x>25 && x<=30) 
return 6 ; 
else if (x>20 && x<=25) 
return 5 ; 
else if(x>17 && x<=20)
return 4 ; 
else 
return 0 ; 
} 
string gradestring(int x) { 
string s1 ; 
if (x==10) 
s1 = "A+" ; 
else if (x==9) 
s1 = "A " ; 
else if (x==8) 
s1 = "B+" ; 
else if (x==7)
s1 = "B " ; 
else if (x==6) 
s1 = "C+" ; 
else if (x==5) 
s1 = "C " ; 
else if (x==4)
s1 = "C#";
else 
s1= "F " ;  
return s1 ; 
}  
string stringtotal(int x ) { 
string s2 ; 
if (x==1) 
s2 = "1" ; 
else if (x==2)
s2= "2" ;  
else if (x==3)
s2= "3" ; 
else if (x==4)
s2= "4" ; 
else if (x==0)
s2= "0" ;  

return s2 ; 
} 
int main() { 
int y ; string enr ; 
int flag = 1; 
while (flag>0) {  
cout << "enter semester(?/3) :-  " ; 
cin>>y ;  
if (y == 1 || y==2||y==3 ) 
{ 
flag -- ; 
}
else if (y>=4 && y<=8) 
cout << "The result of this semester is not available right now " << endl ; 
else if (y>8) 
cout << "entered semster doesnot exist,enter again " ; 
cout << endl ; }
cout << "enter student's enrollment no. :-  " ; 
cin>>enr ;   
cout << endl ; 
int n ; 
cout << "enter 1 if you want access to enter intetnals" << endl ; 
cout << "enter 2 if you want access to enter theory marks " << endl ;  
cout << "enter 3 if you want access to enter practical marks as an external" << endl ; 
int tq1=0 ,tw1=0,ms1=0,tq2=0 ,tw2=0,ms2=0,tq3=0 ,tw3=0,ms3=0,tq4=0 ,tw4=0,ms4=0,tq5=0 ,tw5=0,ms5=0,th1=0,th2=0,th3=0,th4=0,th5=0 ,p1=0 ,p2=0,p3=0,p4=0,p5=0,p8=0,p6=0,tq8=0,count=3,tq6=0,tq107=0,tq89=0;  
while(count>0){ 
cout <<"enter your choice :- " ; 
cin>>n ; cout << endl ;   
//cout << "enter student's enrollment no. :- " ; 
//string enr ; cin>>enr ; cout << endl ; 
//2nd Semester internals 
if (n==1 && y==2 && tq1==0 && tw1==0 && ms1==0 && tq2==0 && tw2==0 && ms2==0 & tq3==0 && tw3==0 && ms3==0 && tq4==0 && tw4==0 && ms4==0 && tq5==0 && tw5==0 && ms5==0 ) 
{    
 cout << "enter passcode :- " ; 
 int pass1 ; cin>>pass1 ; cout << endl ; 
 if (pass1== 2222){
    cout <<"TQ marks of BT201(?/20):- " ; 
    cin>>tq1 ; 
    cout << endl ; 
    cout <<"TW marks of BT201(?/10):- " ;
    cin>>tw1 ; cout << endl ; 
    cout <<"Mid sem marks of BT201(?/20):- "; 
    cin>>ms1 ; cout << endl ;
    cout <<"TW marks of BT202(?/10):- " ;
    cin>>tw2 ; cout << endl ;  
    cout <<"Mid sem marks of BT202(?/20):- "; 
    cin>>ms2 ; cout << endl ;  
       cout <<"TQ marks of BT203(?/20):- " ; 
      cin>>tq3 ; 
    cout << endl ; 
    cout <<"TW marks of BT203(?/10):- " ;
    cin>>tw3; cout << endl ;  
    cout <<"Mid sem marks of BT203(?/20):- "; 
    cin>>ms3; cout << endl ; 
       cout <<"TQ marks of BT204(?/20):- " ; 
    cin>>tq4 ; 
    cout << endl ; 
    cout <<"TW marks of BT204(?/10):- " ;
    cin>>tw4 ; cout << endl ;  
    cout <<"Mid sem marks of BT204(?/20):- "; 
    cin>>ms4; cout << endl ; 
       cout <<"TQ marks of BT205(?/20):- " ; 
    cin>>tq5 ; 
    cout << endl ; 
    cout <<"TW marks of BT205(?/10):- " ;
    cin>>tw5; cout << endl ;  
    cout <<"Mid sem marks of BT205(?/20):- "; 
    cin>>ms5; cout << endl ;  
    cout <<"TQ marks of BT206(?/20):- " ; 
    cin>>tq2; 
    cout << endl ; 
    if (tq1>20 || tq1<0 || tw1>20 || tw1 <0 || ms1>20 || ms1<0 || tq2>20 || tq2<0 || tw2>20 || tw2 <0 || ms2>20 || ms2<0 || tq3>20 || tq3<0 || tw3>20 || tw3 <0 || ms3>20 || ms3<0|| tq4>20 || tq4<0 || tw4>20 || tw4<0 || ms4>20 || ms4<0|| tq5>20 || tq5<0 || tw5>20 || tw5 <0 || ms5>20 || ms5<0  ){ 
    cout << "error in number entered ,try again"<<endl; 
    tq1=0 ,tw1=0,ms1=0,tq2=0 ,tw2=0,ms2=0,tq3=0 ,tw3=0,ms3=0,tq4=0 ,tw4=0,ms4=0,tq5=0 ,tw5=0,ms5=0 ; 
    } 
    else {
    cout <<"______Thank you_____________"; 
    count--; 
    cout << endl ; 
    } 
 }
else{  
cout << "error , passcode is wrong" << endl ;  
}  
}  
// 1st semester internals  
else if (n==1 && y==1 && tq1==0 && tw1==0 && ms1==0 && tq2==0 && tw2==0 && ms2==0 && tq3==0 && tw3==0 && ms3==0 && tq4==0 && tw4==0 && ms4==0 && tq5==0 && tw5==0 && ms5==0 && tq8==0 ) 
{    
 cout << "enter passcode :- " ; 
 int pass1 ; cin>>pass1 ; cout << endl ; 
 if (pass1== 2222){
    cout <<"TQ marks of BT101(?/20):- " ; 
    cin>>tq1 ; 
    cout << endl ; 
    cout <<"TW marks of BT101(?/10):- " ;
    cin>>tw1 ; cout << endl ; 
    cout <<"Mid sem marks of BT101(?/20):- "; 
    cin>>ms1 ; cout << endl ;
    cout <<"TW marks of BT102(?/10):- " ;
    cin>>tw2 ; cout << endl ;  
    cout <<"Mid sem marks of BT102(?/20):- "; 
    cin>>ms2 ; cout << endl ;  
       cout <<"TQ marks of BT103(?/20):- " ; 
      cin>>tq3 ; 
    cout << endl ; 
    cout <<"TW marks of BT103(?/10):- " ;
    cin>>tw3; cout << endl ;  
    cout <<"Mid sem marks of BT103(?/20):- "; 
    cin>>ms3; cout << endl ; 
       cout <<"TQ marks of BT104(?/20):- " ; 
    cin>>tq4 ; 
    cout << endl ; 
    cout <<"TW marks of BT104(?/10):- " ;
    cin>>tw4 ; cout << endl ;  
    cout <<"Mid sem marks of BT104(?/20):- "; 
    cin>>ms4; cout << endl ; 
       cout <<"TQ marks of BT105(?/20):- " ; 
    cin>>tq5 ; 
    cout << endl ; 
    cout <<"TW marks of BT105(?/10):- " ;
    cin>>tw5; cout << endl ;  
    cout <<"Mid sem marks of BT105(?/20):- "; 
    cin>>ms5; cout << endl ;  
    cout <<"TQ marks of BT106(?/20):- " ; 
    cin>>tq2; 
    cout << endl ;  
    cout << "TQ marks of BT108(?/20) :- " ; 
    cin>>tq8; 
    cout << endl ; 
    if (tq1>20 || tq1<0 || tw1>20 || tw1 <0 || ms1>20 || ms1<0 || tq2>20 || tq2<0 || tw2>20 || tw2 <0 || ms2>20 || ms2<0 || tq3>20 || tq3<0 || tw3>20 || tw3 <0 || ms3>20 || ms3<0|| tq4>20 || tq4<0 || tw4>20 || tw4<0 || ms4>20 || ms4<0|| tq5>20 || tq5<0 || tw5>20 || tw5 <0 || ms5>20 || ms5<0  ){ 
    cout << "error in number entered ,try again"<<endl; 
    tq1=0 ,tw1=0,ms1=0,tq2=0 ,tw2=0,ms2=0,tq3=0 ,tw3=0,ms3=0,tq4=0 ,tw4=0,ms4=0,tq5=0 ,tw5=0,ms5=0 ; 
    } 
    else {
    cout <<"______Thank you_____________"; 
    count--; 
    cout << endl ; 
    } 
 }
else{  
cout << "error , passcode is wrong"<<endl ;  
}  
}  
//3rd semester Internals 
else if (n==1 && y==3 && tq1==0 && tw1==0 && ms1==0 && tq2==0 && tw2==0 && ms2==0 && tq3==0 && tw3==0 && ms3==0 && tq4==0 && tw4==0 && ms4==0 && tq5==0 && tw5==0 && ms5==0 && tq8==0 ) 
{    
 cout << "enter passcode :- " ; 
 int pass1 ; cin>>pass1 ; cout << endl ; 
 if (pass1== 2222){
    cout <<"TW marks of ES301(?/10):- " ;
    cin>>tw1 ; cout << endl ; 
    cout <<"Mid sem marks of ES301(?/20):- "; 
    cin>>ms1 ; cout << endl ;
    cout <<"TW marks of CS302(?/10):- " ;
    cin>>tw2 ; cout << endl ;  
    cout <<"Mid sem marks of CS302(?/20):- "; 
    cin>>ms2 ; cout << endl ;  
       cout <<"TQ marks of CS303(?/20):- " ; 
      cin>>tq3 ; 
    cout << endl ; 
    cout <<"TW marks of CS303(?/10):- " ;
    cin>>tw3; cout << endl ;  
    cout <<"Mid sem marks of CS303(?/20):- "; 
    cin>>ms3; cout << endl ; 
       cout <<"TQ marks of CS304(?/20):- " ; 
    cin>>tq4 ; 
    cout << endl ; 
    cout <<"TW marks of CS304(?/10):- " ;
    cin>>tw4 ; cout << endl ;  
    cout <<"Mid sem marks of CS304(?/20):- "; 
    cin>>ms4; cout << endl ; 
       cout <<"TQ marks of CS305(?/20):- " ; 
    cin>>tq5 ; 
    cout << endl ; 
    cout <<"TW marks of CS305(?/10):- " ;
    cin>>tw5; cout << endl ;  
    cout <<"Mid sem marks of CS305(?/20):- "; 
    cin>>ms5; cout << endl ;  
    cout <<"Marks of C306(?/20):- " ; 
    cin>>tq6; 
    cout << endl ;  
    cout << "Inernship marks of BT107(?/50) :- "; 
    cin>>tq107; 
    cout << endl ; 
    if (tq1>20 || tq1<0 || tw1>20 || tw1 <0 || ms1>20 || ms1<0 || tq2>20 || tq2<0 || tw2>20 || tw2 <0 || ms2>20 || ms2<0 || tq3>20 || tq3<0 || tw3>20 || tw3 <0 || ms3>20 || ms3<0|| tq4>20 || tq4<0 || tw4>20 || tw4<0 || ms4>20 || ms4<0|| tq5>20 || tq5<0 || tw5>20 || tw5 <0 || ms5>20 || ms5<0||tq8>50||tq8<0  ){ 
    cout << "error in number entered ,try again"<<endl; 
    tq1=0 ,tw1=0,ms1=0,tq2=0 ,tw2=0,ms2=0,tq3=0 ,tw3=0,ms3=0,tq4=0 ,tw4=0,ms4=0,tq5=0 ,tw5=0,ms5=0 ; 
    } 
    else {
    cout <<"______Thank you_____________"; 
    count--; 
    cout << endl ; 
    } 
 }
else{  
cout << "error , passcode is wrong"<<endl ;  
}  
}  

//2nd semester therory marks 
else if (n==2 && y==2 && th1==0 && th2 ==0 && th3 ==0 && th4 ==0 &&th5 ==0 ) 
{ 
cout << "enter passcode :- " ; 
int pass2 ; cin>>pass2 ; 
if (pass2 == 3333 ) 
{  
 cout << "enter marks of BT201(?/70) :- " ;
cin>>th1 ; cout << endl ;  
cout << "enter marks of BT202(?/70) :- " ; 
cin>>th2 ; cout << endl ; 
cout << "enter marks of BT203(?/70) :- " ;
cin>>th3 ; cout << endl ; 
cout << "enter marks of BT204(?/70) :- " ;
cin>>th4 ; cout << endl ; 
cout << "enter marks of BT205(?/70) :- " ; 
cin>>th5; cout << endl ;  
if (th1>70 || th1<0 || th2>70 || th2<0 || th3>70 || th3<0|| th4>70 || th4<0 || th5>70 || th5<0  ) 
{ 
cout << "error in number entered,try again"<<endl; 
th1=0,th2=0,th3=0,th4=0,th5=0 ; 

} 
else 
cout << "________Thank you_________" <<endl;
 count--; 
}
else 
cout << "error, passcode is wrong "<<endl; 
}  
 //1st semester Theory Marks 
 else if (n==2 && y==1 && th1==0 && th2 ==0 && th3 ==0 && th4 ==0 &&th5 ==0 ) 
{ 
cout << "enter passcode :- " ; 
int pass2 ; cin>>pass2 ; 
if (pass2 == 3333 ) 
{  
 cout << "enter marks of BT101(?/70) :- " ;
cin>>th1 ; cout << endl ;  
cout << "enter marks of BT102(?/70) :- " ; 
cin>>th2 ; cout << endl ; 
cout << "enter marks of BT103(?/70) :- " ;
cin>>th3 ; cout << endl ; 
cout << "enter marks of BT104(?/70) :- " ;
cin>>th4 ; cout << endl ; 
cout << "enter marks of BT105(?/70) :- " ; 
cin>>th5; cout << endl ;  
if (th1>70 || th1<0 || th2>70 || th2<0 || th3>70 || th3<0|| th4>70 || th4<0 || th5>70 || th5<0  ) 
{ 
cout << "error in number entered,try again" <<endl; 
th1=0,th2=0,th3=0,th4=0,th5=0 ; 
} 
else 
cout << "________Thank you_________" <<endl;
 count--; 
}
else 
cout << "error, passcode is wrong "<<endl; 
} 
//3rd semester Theory Marks 
else if (n==2 && y==3 && th1==0 && th2 ==0 && th3 ==0 && th4 ==0 &&th5 ==0 ) 
{ 
cout << "enter passcode :- " ; 
int pass2 ; cin>>pass2 ; 
if (pass2 == 3333 ) 
{  
 cout << "enter marks of ES301(?/70) :- " ;
cin>>th1 ; cout << endl ;  
cout << "enter marks of CS302(?/70) :- " ; 
cin>>th2 ; cout << endl ; 
cout << "enter marks of CS303(?/70) :- " ;
cin>>th3 ; cout << endl ; 
cout << "enter marks of CS304(?/70) :- " ;
cin>>th4 ; cout << endl ; 
cout << "enter marks of CS305(?/70) :- " ; 
cin>>th5; cout << endl ;  
if (th1>70 || th1<0 || th2>70 || th2<0 || th3>70 || th3<0|| th4>70 || th4<0 || th5>70 || th5<0  ) 
{ 
cout << "error in number entered,try again" ; 
th1=0,th2=0,th3=0,th4=0,th5=0 ; 
} 
else 
cout << "________Thank you_________" <<endl;
 count--; 
}
else 
cout << "error, passcode is wrong "<<endl; 
} 

//2nd semester PRACTICAL NUMBER 
else if (n==3 &&y==2 && p1==0 && p2 ==0 &&p3 ==0 &&p4==0 &&p5==0) 
{  
cout << "enter passcode :- " ; 
int pass3 ; cin>>pass3 ; cout << endl; 
if (pass3 == 4444) 
{  
cout << "enter practical marks of BT201(?/30) :- " ; 
cin>>p1 ; cout << endl ;  
cout << "enter practical marks of BT206(?/30) :- " ; 
cin>>p2 ; cout << endl ;  
cout << "enter practical marks of BT203(?/30) :- " ; 
cin>>p3 ; cout << endl ; 
cout << "enter practical marks of BT204(?/30) :- " ; 
cin>>p4; cout << endl ;  
cout << "enter practical marks of BT205(?/30) :- " ; 
cin>>p5 ; cout << endl ;  
if (p1>30 || p1 <0 || p2>30 || p2 <0 || p3>30 || p3<0 || p4>30 || p4<0 || p5>30 || p5 <0 )
{ 
cout << "error in number entered,try again"<<endl; 
p1=0 ,p2=0,p3=0,p4=0,p5=0;  
} 
else 
cout <<"_________Thank you________" <<endl; 
count--; 
} 
else 
cout << "wrong passcode" ; 
} 
//1st Semester  PRACTICAL NUMBER 
else if (n==3 &&y==1 && p1==0 && p2 ==0 &&p3 ==0 &&p4==0 &&p5==0) 
{  
cout << "enter passcode :- " ; 
int pass3 ; cin>>pass3 ; cout << endl; 
if (pass3 == 4444) 
{  
cout << "enter practical marks of BT101(?/30) :- " ; 
cin>>p1 ; cout << endl ;  
cout << "enter practical marks of BT106(?/30) :- " ; 
cin>>p2 ; cout << endl ;  
cout << "enter practical marks of BT103(?/30) :- " ; 
cin>>p3 ; cout << endl ; 
cout << "enter practical marks of BT104(?/30) :- " ; 
cin>>p4; cout << endl ;  
cout << "enter practical marks of BT105(?/30) :- " ; 
cin>>p5 ; cout << endl ;  
cout << "enter practical marks of BT108(?/30) :- " ; 
cin>>p8 ; cout << endl ;  
if (p1>30 || p1 <0 || p2>30 || p2 <0 || p3>30 || p3<0 || p4>30 || p4<0 || p5>30 || p5 <0||p8<0|| p8>30 )
{ 
cout << "error in number entered,try again"<<endl ; 
p1=0 ,p2=0,p3=0,p4=0,p5=0;  
} 
else 
cout <<"_________Thank you________" <<endl; 
count--; 
} 
else 
cout << "wrong passcode" ; 
} 
//3rd semester practical marks 
else if (n==3 &&y==3&& p1==0 && p2 ==0 &&p3 ==0 &&p4==0 &&p5==0) 
{  
cout << "enter passcode :- " ; 
int pass3 ; cin>>pass3 ; cout << endl; 
if (pass3 == 4444) 
{  
cout << "enter practical marks of CS303(?/30) :- " ; 
cin>>p3 ; cout << endl ; 
cout << "enter practical marks of CS304(?/30) :- " ; 
cin>>p4; cout << endl ;  
cout << "enter practical marks of CS305(?/30) :- " ; 
cin>>p5 ; cout << endl ;  
cout << "enter practical marks of CS306(?/30) :- " ; 
cin>>p6 ; cout << endl ;  
if (p3>30 || p3<0 || p4>30 || p4<0 || p5>30 || p5 <0||p8<0|| p8>30 )
{ 
cout << "error in number entered,try again"<<endl ; 
p1=0 ,p2=0,p3=0,p4=0,p5=0,p6=0;  
} 
else 
cout <<"_________Thank you________" <<endl; 
count--; 
} 
else 
cout << "wrong passcode" ; 
} 
else {
cout << "The numbers are already assigned or the entered no. is wrong choice "; 
} 
}  
//CALCULATING NUMBERS 
int totalth1= th1+ms1+tw1;  
int totalth2= th2+ms2+tw2;  
int totalth3= th3+ms3+tw3;  
int totalth4= th4+ms4+tw4;  
int totalth5= th5+ms5+tw5; 
int totalp1 = p1+tq1 ;  
int totalp2 = p2+tq2 ; 
int totalp3 = p3+tq3 ; 
int totalp4 = p4+tq4 ; 
int totalp5 = p5+tq5 ;   
int totalp8 = p8+tq8; 
int totalp6=p6+tq6; 
int totalp107=tq107; 
//Assigning numbers  to GRADE 
string str1,str2,str3,str4,str5 ,strp1,strp2,strp3,strp4,strp5,strp8,strp6,strp107 ; 
int gradeth1 = grade(totalth1) ; 
int gradeth2 = grade(totalth2) ; 
int gradeth3 = grade(totalth3) ; 
int gradeth4 = grade(totalth4) ; 
int gradeth5 = grade(totalth5) ; 
int gradep1 = gradep(totalp1) ; 
int gradep2 = gradep(totalp2) ; 
int gradep3 = gradep(totalp3) ; 
int gradep4 = gradep(totalp4) ; 
int gradep5 = gradep(totalp5) ;  
int gradep8 = gradep(totalp8);  
int gradep6=gradep(totalp6); 
int gradep107=gradep(totalp107); 
// ASSIGNING STRING GRADE 
str1 = gradestring(gradeth1);  
str2 = gradestring(gradeth2);  
str3 = gradestring(gradeth3);  
str4 = gradestring(gradeth4);  
str5 = gradestring(gradeth5); 
strp1 = gradestring(gradep1) ;
strp2 = gradestring(gradep2) ;
strp3 = gradestring(gradep3) ;
strp4 = gradestring(gradep4) ;
strp5 = gradestring(gradep5) ; 
strp8 = gradestring(gradep8);  
strp6=gradestring(gradep6); 
strp107=gradestring(gradep107); 
int totalgb1,totalgb2,totalgb3,totalgb4,totalgb5,totalgp1,totalgp2,totalgp3,totalgp4,totalgp5,totalgp8,totalgp6,totalgp107;
if(y==2) { 
//total credit of 2nd semester 
 totalgb1 = 3 ; 
totalgb2 = 4 ; 
totalgb3 = 3 ; 
totalgb4= 3 ; 
totalgb5 = 3 ; 
 totalgp1 = 1; 
 totalgp2 = 1 ; 
  totalgp3 = 1 ; 
totalgp4= 1 ; 
totalgp5 = 1;   } 
if(y==1) { 
//total credit of 1st semester 
 totalgb1 = 3 ; 
totalgb2 = 4 ; 
totalgb3 = 3 ; 
totalgb4= 2 ; 
totalgb5 = 2 ; 
 totalgp1 = 1; 
 totalgp2 = 1 ; 
  totalgp3 = 1 ; 
totalgp4= 1 ; 
totalgp5 = 1; 
totalgp8 = 2 ;  
  }
  if (y==3){
  //total credit of 3rd semester 
 totalgb1 = 4; 
totalgb2 = 4 ; 
totalgb3 = 3 ; 
totalgb4= 3 ; 
totalgb5 = 3; 
 totalgp1 = 1; 
 totalgp2 = 1 ; 
  totalgp3 = 1 ; 
totalgp4= 1 ; 
totalgp5 = 1; 
totalgp6= 2 ;  
totalgp107=2 ; 
  }  
//declaring earned credits 
int etotalgb1,etotalgb2,etotalgb3,etotalgb4,etotalgb5,etotalgp1,etotalgp2,etotalgp3,etotalgp4,etotalgp5,etotalgp8,etotalgp107,etotalgp6; 
//assigning earned credits 
if(gradeth1==0) etotalgb1=0 ; 
else etotalgb1 = totalgb1 ; 
if(gradeth2==0) etotalgb2=0 ; 
else etotalgb2 = totalgb2 ; 
if(gradeth3==0) etotalgb3=0 ; 
else etotalgb3= totalgb3; 
if(gradeth4==0) etotalgb4=0 ; 
else etotalgb4 = totalgb4 ; 
if(gradeth5==0) etotalgb5=0 ; 
else etotalgb5 = totalgb5 ; 
if(gradep1==0) etotalgp1=0 ; 
else etotalgp1 = totalgp1 ; 
if(gradep2==0) etotalgp2=0 ; 
else etotalgp2 = totalgp2 ; 
if(gradep3==0) etotalgp3=0 ; 
else etotalgp3 = totalgp3 ; 
if(gradep4==0) etotalgp4=0 ; 
else etotalgp4 = totalgp4 ; 
if(gradep5==0) etotalgp5=0 ; 
else etotalgp5 = totalgp5 ;  
if(gradep8==0) etotalgp8=0 ; 
else etotalgp8= totalgp8; 
if(gradep6==0) etotalgp6=0 ; 
else etotalgp6=totalgp6; 
if(gradep107==0) etotalgp107=0 ; 
else etotalgp107=totalgp107; 
//converting int into string value 
string stretotalgb1 = stringtotal(etotalgb1); 
string stretotalgb2 = stringtotal(etotalgb2);
string stretotalgb3 = stringtotal(etotalgb3);
string stretotalgb4 = stringtotal(etotalgb4);
string stretotalgb5 = stringtotal(etotalgb5);
string stretotalgp1 = stringtotal(etotalgp1); 
string stretotalgp2 = stringtotal(etotalgp2);
string stretotalgp3 = stringtotal(etotalgp3);
string stretotalgp4 = stringtotal(etotalgp4);
string stretotalgp5 = stringtotal(etotalgp5);
string stretotalgp8 = stringtotal(etotalgp8); 
string stretotalgp6=stringtotal(etotalgp6); 
string stretotalgp107=stringtotal(etotalgp107);
string strtotalgb1 = stringtotal(totalgb1); 
string strtotalgb2 = stringtotal(totalgb2);
string strtotalgb3 = stringtotal(totalgb3);
string strtotalgb4 = stringtotal(totalgb4);
string strtotalgb5 = stringtotal(totalgb5);
string strtotalgp1 = stringtotal(totalgp1); 
string strtotalgp2 = stringtotal(totalgp2);
string strtotalgp3 = stringtotal(totalgp3);
string strtotalgp4 = stringtotal(totalgp4);
string strtotalgp5 = stringtotal(totalgp5); 
string strtotalgp8= stringtotal(totalgp8); 
string strtotalgp6= stringtotal(totalgp6) ; 
string strtotalgp107=stringtotal(totalgp107);
//CALCULATING SGPA 
int sum=0 ; 
if(y==2) { 
sum = (gradeth1*etotalgb1) +(gradeth2*etotalgb2)+(gradeth3*etotalgb3)+(gradeth4*etotalgb4)+(gradeth5*etotalgb5)+(gradep1*etotalgp1)+ (gradep2*etotalgp2)+(gradep3*etotalgp3)+(gradep4*etotalgp4)+(gradep5*etotalgp5) ; } 
if(y==1)  { 
sum= (gradeth1*etotalgb1) +(gradeth2*etotalgb2)+(gradeth3*etotalgb3)+(gradeth4*etotalgb4)+(gradeth5*etotalgb5)+(gradep1*etotalgp1)+ (gradep2*etotalgp2)+(gradep3*etotalgp3)+(gradep4*etotalgp4)+(gradep5*etotalgp5) + (gradep8*etotalgp8) ; 
} 
if(y==3)  { 
sum= (gradeth1*etotalgb1) +(gradeth2*etotalgb2)+(gradeth3*etotalgb3)+(gradeth4*etotalgb4)+(gradeth5*etotalgb5)+(gradep3*etotalgp3)+(gradep4*etotalgp4)+(gradep5*etotalgp5) + (gradep6*etotalgp6)+(gradep107*etotalgp107) ; 
}
float sgpa2 ; 
if (y==1||y==2)
sgpa2= (float)sum / 21;   
if(y==3)
sgpa2=(float)sum/24; 
float rsgpa2= rounde(sgpa2); 
cout <<"-------------------------------------------------------------------"<<endl ;  
cout << "enrollment no. :- " << enr <<endl ;  
cout << "------------------------------------------------------------------"<<endl ; 
string finalresult2[11][4]={ {"SUBJECT" , "TOTAL CREDIT","EARNED CREDIT","GRADE"} ,
{"BT201-[T]   ", strtotalgb1,stretotalgb1,str1},{"BT202-[T]   ", strtotalgb2,stretotalgb2,str2},{"BT203-[T]   ", strtotalgb3,stretotalgb3,str3},{"BT204-[T]   ", strtotalgb4,stretotalgb4,str4}, {"BT205-[T]   ", strtotalgb5,stretotalgb5,str5},{"BT201-[P]   ",strtotalgp1,stretotalgp1,strp1},{"BT203-[P]   ",strtotalgp3,stretotalgp3,strp3},{"BT204-[P]   ",strtotalgp4,stretotalgp4,strp4},{"BT205-[P]   ",strtotalgp5,stretotalgp5,strp5},{"BT206-[P]   ",strtotalgp2,stretotalgp2,strp2} 
} ;  
string finalresult1[12][4]={ {"SUBJECT" , "TOTAL CREDIT","EARNED CREDIT","GRADE"} ,
{"BT101-[T]   ", strtotalgb1,stretotalgb1,str1},{"BT102-[T]   ", strtotalgb2,stretotalgb2,str2},{"BT103-[T]   ", strtotalgb3,stretotalgb3,str3},{"BT104-[T]   ", strtotalgb4,stretotalgb4,str4}, {"BT105-[T]   ", strtotalgb5,stretotalgb5,str5},{"BT101-[P]   ",strtotalgp1,stretotalgp1,strp1},{"BT103-[P]   ",strtotalgp3,stretotalgp3,strp3},{"BT104-[P]   ",strtotalgp4,stretotalgp4,strp4},{"BT105-[P]   ",strtotalgp5,stretotalgp5,strp5},{"BT106-[P]   ",strtotalgp2,stretotalgp2,strp2} ,
{"BT108-[P]   ",strtotalgp8,stretotalgp8,strp8}
} ; 
string finalresult3[11][4]={ {"SUBJECT" , "TOTAL CREDIT","EARNED CREDIT","GRADE"} ,
{"ES301-[T]   ", strtotalgb1,stretotalgb1,str1},{"CS302-[T]   ", strtotalgb2,stretotalgb2,str2},{"CS303-[T]   ", strtotalgb3,stretotalgb3,str3},{"CS304-[T]   ", strtotalgb4,stretotalgb4,str4}, {"CS305-[T]   ", strtotalgb5,stretotalgb5,str5},{"BT107-[P]   ",strtotalgp107,stretotalgp107,strp107},{"CS303-[P]   ",strtotalgp3,stretotalgp3,strp3},{"CS304-[P]   ",strtotalgp4,stretotalgp4,strp4},{"CS305-[P]   ",strtotalgp5,stretotalgp5,strp5},{"CS306-[P]   ",strtotalgp6,stretotalgp6,strp6} ,
} ; 
vector<string>failverdict; 
vector<string>graceverdict; 
//2nd semester final result 
if (y==2) { 
for (int i = 0 ; i<11 ; i++) 
{ 
for (int j= 0 ; j<4 ; j++) 
{ 
cout << finalresult2[i][j] <<"   |  "  ; 
} 
cout << endl ; 
}
cout << "------------------------------------------------------------------" <<endl ;  
for (int i = 0 ; i<11 ; i++){
    if (finalresult2[i][2]=="0")
    failverdict.push_back (finalresult2[i][0]); 
    if (finalresult2[i][3]=="C#") 
    graceverdict.push_back(finalresult2[i][0]); 
}  
if (failverdict.empty()&&graceverdict.empty()) {
cout <<"PASS    "<< "SGPA :- " << rsgpa2<<"     " <<"CGPA:-"<<rsgpa2<<endl; 
} 
else if (!failverdict.empty()&&graceverdict.empty()){
for (int x =0 ; x<failverdict.size() ; x++) { 
cout << "FAIL IN " <<failverdict[x]<<"  " ; 
} 
cout << "SGPA -: " <<  rsgpa2<<"  " <<"CGPA-: "<<rsgpa2<<endl; 
} 
else if (!graceverdict.empty() && failverdict.empty()) { 
cout << "Pass with grace" << "  "<< "  SGPA -: " << rsgpa2<<"  " <<"CGPA-: "<<rsgpa2<<endl; 
} 

cout << "------------------------------------------------------------------" <<endl ;  
}
//first semester final result 
if (y==1) { 
for (int i = 0 ; i<12 ; i++) 
{ 
for (int j= 0 ; j<4 ; j++) 
{ 
cout << finalresult1[i][j] <<"   |  "  ; 
} 
cout << endl ; 
}
cout << "------------------------------------------------------------------" <<endl ;  
for (int i = 0 ; i<11 ; i++){
    if (finalresult2[i][2]=="0")
    failverdict.push_back (finalresult2[i][0]); 
    if (finalresult2[i][3]=="C#") 
    graceverdict.push_back(finalresult2[i][0]); 
}  
if (failverdict.empty()&&graceverdict.empty()) {
cout <<"PASS    "<< "SGPA :- " << rsgpa2<<"     " <<"CGPA:-"<<rsgpa2<<endl; 
} 
else if (!failverdict.empty()&&graceverdict.empty()){
for (int x=0 ; x<failverdict.size() ; x++) { 
cout << "FAIL IN " <<failverdict[x]<<"  " ; 
} 
cout << "SGPA -: " <<  rsgpa2<<"  " <<"CGPA-: "<<rsgpa2<<endl; 
} 
else if (!graceverdict.empty() && failverdict.empty()) { 
cout << "Pass with grace" << "  "<< "  SGPA -: " << rsgpa2<<"  " <<"CGPA-: "<<rsgpa2<<endl; 
} 

cout << "------------------------------------------------------------------" <<endl ;  
}
//3rd semester final result 
if (y==3) { 
for (int i = 0 ; i<11; i++) 
{ 
for (int j= 0 ; j<4 ; j++) 
{ 
cout << finalresult3[i][j] <<"   |  "  ; 
} 
cout << endl ; 
}
cout << "------------------------------------------------------------------" <<endl ;  
for (int i = 0 ; i<11 ; i++){
    if (finalresult3[i][2]=="0")
    failverdict.push_back (finalresult3[i][0]); 
    if (finalresult3[i][3]=="C#") 
    graceverdict.push_back(finalresult3[i][0]); 
}  
if (failverdict.empty()&&graceverdict.empty()) {
cout <<"PASS    "<< "SGPA :- " << rsgpa2<<"     " <<"CGPA:-"<<rsgpa2<<endl; 
} 
else if (!failverdict.empty()&&graceverdict.empty()){
for (int x=0 ; x<failverdict.size();x++) { 
cout << "FAIL IN " <<failverdict[x]<<"  " ; 
} 
cout << "SGPA -: " <<  rsgpa2<<"  " <<"CGPA-: "<<rsgpa2<<endl; 
} 
else if (!graceverdict.empty() && failverdict.empty()) { 
cout << "Pass with grace" << "  "<< "  SGPA -: " << rsgpa2<<"  " <<"CGPA-: "<<rsgpa2<<endl; 
} 

cout << "------------------------------------------------------------------" <<endl ;  
}
return 0; 
}
