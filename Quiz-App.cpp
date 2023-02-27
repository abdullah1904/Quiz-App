// Declaring Header Files
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;
// Prototyping
void header();
bool rollno();
bool check(char, char, char);
void data(string, string, int, int);
void instructions();
int quiz();
int checker(char, char , char, char ,char, char,char, char , char, char ,char, char,char, char , char, char ,char, char,char, char , char, char ,char, char);
bool printresult(int);
bool teachercheck();
void pgreetings();
void fgreetings();
// Variables P is portion and q is question, t is total and g is gained score
char p1q1, p1q2, p1q3, p1q4, p1q5, p1q6,
	p2q1, p2q2, p2q3, p2q4, p2q5, p2q6,
	p3q1, p3q2, p3q3, p3q4, p3q5, p3q6,
	p4q1, p4q2, p4q3, p4q4, p4q5, p4q6;
int tscore = 24, gscore;
// Main Function
int main()
{
	bool flag1, flag2;
	for (int i = 1; i <= 511; i)
	{
		bool check = rollno();
		if (check == 1)
		{
			instructions();
			system("cls");
			gscore = quiz();
			system("cls");
			bool flag1 = printresult(gscore);
			system("cls");
			if (flag1 == 0){
				i = 525;
				break;
			}
			else{
				flag2 = teachercheck();
				if(flag2 == 1){
					system("cls");
					continue;
				}
				else{
					break;
				}
			}
		}
		else if (check == 0)
		{
			cout << "Enter correct roll number." << endl
				<< "Press enter key for another chance.";
			char dummy = getche();
			system("cls");
			continue;
		}
	}
	return 0;
}
// Function for Header
void header(){
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
}
// Function to get Roll number (Connected with check function with)
bool rollno()
{
	char a, b, c;
	// header();
	cout<<" --: Quiz App :-- "<<endl;
	cout<< endl;
	cout << "Enter Your Three Digit Roll Number: ";
	a = getche();
	b = getche();
	c = getche();
	cout << endl;
	system("cls");
	return check(a, b, c);
}
// Function to check Roll number (Connected with data and rollno function)
bool check(char a, char b, char c)
{
	if(a == '5' && b =='1' && c=='1'){
		data("Mahreen Farooq", "Muhammad Farooq", 18, 511);
		return true;
	}
	else if(a == '5' && b =='1' && c=='3'){
		data("Mirza Sufiyan Ahmad", "Mirza Maqbool Ahmad", 20, 513);
		return true;
	}
	else if(a == '5' && b =='2' && c=='5'){
		data("Muhammad Abdullah", "Zahid Mehmood", 18 , 525);
		return true;
	}
	else if(a == '5' && b =='2' && c=='7'){
		data("Maha Butt", "Muhammad Amjad", 18, 527);
		return true;
	}
	else if(a== '5' && b=='1' && c=='4'){
		data("Abdul Rehman", "Zahid Nadeem", 19, 514);
		return true;
	}
	else if(a== '5' && b=='2' && c=='0'){
		data("Syed Huzaifa Ali", "Imran Ali", 20, 520);
		return true;
	}
	else if(a== '5' && b=='4' && c=='5'){
		data("Hussnain Ali", "Mehmood-ul-Hassan", 20, 545);
		return true;
	}
	else if(a== '5' && b=='4' && c=='7'){
		data("Asim Shehzad", "Zafar Iqbal", 19, 547);
		return true; 
	}
	else if(a== '5' && b=='4' && c=='9'){
		data("Abdul Ahad", "Ghulam Hussain", 19,549);
		return true;
	}
	else if(a== '5' && b=='5' && c=='8'){
		data("Chudhary Muhammad Ahmad", "Chuhdary Muhmmad Jamil", 19, 558);
		return true;
	}
	else if(a== '5' && b=='6' && c=='4'){
		data("Noman Mehmood", "Mehmood Ahmad", 22, 564);
		return true;
	}
	else
	{
		return false;
	}
}
// Function to print candidate data (Connected with rollno function)
void data(string name, string fname, int age, int ID){
	cout<<" --: Candidate Data :--"<<endl<<endl;
	cout<<"Candidate Name: "<<name<<endl;
	cout<<"Candiate Father Name: "<<fname<<endl;
	cout<<"Candiate Roll Number: "<<ID<<endl;
	cout<<"Candidate Age: "<<age<<endl<<endl;
	cout<<"Enter to confirm data and proceed next ";
	char dummy = getche();
}
// Function for instructions
void instructions()
{
	system("cls");
	cout << " --: Instructions :--" << endl
		<< endl;
	cout << "1) The quiz consists of 4 portions and each portion contains 6 questions." << endl;
	cout << "2) The correct option cause the increment of 1 in gained scored and there will be no negative marking." << endl;
	cout << "3) For moving to previous question click P and for moving to next question click N and for skip click S." << endl;
	cout << "4) You have only 12 minutes to solve the quiz." << endl;
	cout << endl
		<< "Press enter key to proceed next: ";
	char dummy = getche();
}
// Function for Quiz (Connected with checker function)
int quiz()
{
	p1q1:
	cout << " --: C++ Portion :--" << endl
		<< endl;
	cout << "Q1: Object-oriented programming employs _____ programming?" << endl
		<< "a)  Top-down" << endl
		<< "b)  Bottom-up" << endl
		<< "c)  Procedural" << endl
		<< "d)  All of above" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p1q1 = getche();
	system("cls");
	switch (p1q1)
	{
	case 'n':
	case 'N':
		goto p1q2;
		break;
	case 'P':
	case 'p':
		goto p1q1;
		break;
	}
p1q2:
	cout << " --: C++ Portion :--" << endl
		<< endl;
	cout << "Q2: Which of the following is address of operator?" << endl
		<< "a)  *" << endl
		<< "b)  &&" << endl
		<< "c)  []" << endl
		<< "d)  &" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p1q2 = getche();
	system("cls");
	switch (p1q2)
	{
	case 'n':
	case 'N':
		goto p1q3;
		break;
	case 'P':
	case 'p':
		goto p1q1;
		break;
	}
p1q3:
	cout << " --: C++ Portion :--" << endl
		<< endl;
	cout << "Q3: What following operator is called (?:)?" << endl
		<< "a)  Scope resolution" << endl
		<< "b)  Conditional" << endl
		<< "c)  Ternary" << endl
		<< "d)  If-else o/p" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p1q3 = getche();
	system("cls");
	switch (p1q3)
	{
	case 'n':
	case 'N':
		goto p1q4;
		break;
	case 'P':
	case 'p':
		goto p1q2;
		break;
	}
p1q4:
	cout << " --: C++ Portion :--" << endl
		<< endl;
	cout << "Q4: Int a[] = {5,6,7,8,9}, what is the value of a[3]?" << endl
		<< "a)  7" << endl
		<< "b)  6" << endl
		<< "c)  8" << endl
		<< "d)  9" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p1q4 = getche();
	system("cls");
	switch (p1q4)
	{
	case 'n':
	case 'N':
		goto p1q5;
		break;
	case 'P':
	case 'p':
		goto p1q3;
		break;
	}
p1q5:
	cout << " --: C++ Portion :--" << endl
		<< endl;
	cout << "Q5: goto is a ___?" << endl
		<< "a)  Variable" << endl
		<< "b)  Label" << endl
		<< "c)  Operator" << endl
		<< "d)  Function" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p1q5 = getche();
	system("cls");
	switch (p1q5)
	{
	case 'n':
	case 'N':
		goto p1q6;
		break;
	case 'P':
	case 'p':
		goto p1q4;
		break;
	}
p1q6:
	cout << " --: C++ Portion :--" << endl
		<< endl;
	cout << "Q6: Which of the following is scope resolution operator?" << endl
		<< "a)  :" << endl
		<< "b)  ?:" << endl
		<< "c)  ::" << endl
		<< "d)  none" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p1q6 = getche();
	system("cls");
	switch (p1q6)
	{
	case 'n':
	case 'N':
		goto p2q1;
		break;
	case 'P':
	case 'p':
		goto p1q5;
		break;
	}
	p2q1:
	cout << " --: HTML Portion :--" << endl
		<< endl;
	cout << "Q1: What is the difference between the post and get methods in a form?" << endl
		<< "a)  Post is used for sending information to the server. get is used for retrieving form information from the server" << endl
		<< "b)  Get is used for sending information to the server. post is used for retrieving form information from the server" << endl
		<< "c)  With get, data is included in the form body when send to the server. With post, the data goes through the URL" << endl
		<< "d)  With post, data is included in the form body when send to the server. With get, the data goes through the URL" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p2q1 = getche();
	system("cls");
	switch (p2q1)
	{
	case 'n':
	case 'N':
		goto p2q2;
		break;
	case 'P':
	case 'p':
		goto p1q6;
		break;
	}
p2q2:
	cout << " --: HTML Portion :--" << endl
		<< endl;
	cout << "Q2: What is the best way to apply bold styling to text?" << endl
		<< "a)  <strong>" << endl
		<< "b)  Use CSS" << endl
		<< "c)  <bold>" << endl
		<< "d)  <b>" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p2q2 = getche();
	system("cls");
	switch (p2q2)
	{
	case 'n':
	case 'N':
		goto p2q3;
		break;
	case 'P':
	case 'p':
		goto p2q1;
		break;
	}
p2q3:
	cout << " --: HTML Portion :--" << endl
		<< endl;
	cout << "Q3: How do you confirm that a document is written in HTML5?" << endl
		<< "a)  The server wraps the webpage in an HTML5 wrapper" << endl
		<< "b)  Use the <!DOCTYPE html> declaration that starts the document" << endl
		<< "c)  The browser receives encoding from the server to display the document with HTML5" << endl
		<< "d)  It is enclosed in a <html> tag" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p2q3 = getche();
	system("cls");
	switch (p2q3)
	{
	case 'n':
	case 'N':
		goto p2q4;
		break;
	case 'P':
	case 'p':
		goto p2q2;
		break;
	}
p2q4:
	cout << " --: HTML Portion :--" << endl
		<< endl;
	cout << "Q4: What is the difference between the <div> and <span> tags?" << endl
		<< "a)  <div> is used where a generic block-level tag is needed, while <span> is used where a generic inline tag is needed" << endl
		<< "b)  <div> is used for major divisions on a page, while <span> is used to span across columns" << endl
		<< "c)  <div> is the industry-standard default tag, but you could use <span> if you prefer" << endl
		<< "d)  <div> is used where a generic inline tag is needed, while <span> is used where a generic block-level tag is needed" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p2q4 = getche();
	system("cls");
	switch (p2q4)
	{
	case 'n':
	case 'N':
		goto p2q5;
		break;
	case 'P':
	case 'p':
		goto p2q3;
		break;
	}
p2q5:
	cout << " --: HTML Portion :--" << endl
		<< endl;
	cout << "Q5: What is the difference between <input type=\"submit\" value=\"click me\"> and <button type=\"submit\">Click me</button>?" << endl
		<< "a)  There is no difference. Both will render a button that submits a form" << endl
		<< "b)  Both will submit a form. However, the <button> can have content other than text, like an image or nested HTML elements, while the <input> cannot" << endl
		<< "c)  <input type=\"button\"> has been deprecated in HTML5. You should use the <button> tag instead" << endl
		<< "d)  Both will submit a form. However, the <input> can have content other than text, like an image or nested HTML elements, while the <button> cannot" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p2q5 = getche();
	system("cls");
	switch (p2q5)
	{
	case 'n':
	case 'N':
		goto p2q6;
		break;
	case 'P':
	case 'p':
		goto p2q4;
		break;
	}
p2q6:
	cout << " --: HTML Portion :--" << endl
		<< endl;
	cout << "Q6: Where do <header> and <footer> tags typically occur?" << endl
		<< "a)  As children of <body>, <article>, <aside>, and <section> tags" << endl
		<< "b)  As children of <body>, <article>, and <section> tags" << endl
		<< "c)  As children of <body>, <article>, <aside>, <nav>, and <section> tags" << endl
		<< "d)  As children of <body>, <article>, <table>, and <section> tags" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p2q6 = getche();
	system("cls");
	switch (p2q6)
	{
	case 'n':
	case 'N':
		goto p3q1;
		break;
	case 'P':
	case 'p':
		goto p2q5;
		break;
	}
	p3q1:
	cout << " --: CSS Portion :--" << endl
		<< endl;
	cout << "Q1: What is the line-height property primarily used for?" << endl
		<< "a)  To control the height of the space between two lines of content" << endl
		<< "b)  To control the height of the space between heading elements" << endl
		<< "c)  To control the height of the character size" << endl
		<< "d)  To control the width of the space between characters" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p3q1 = getche();
	system("cls");
	switch (p3q1)
	{
	case 'n':
	case 'N':
		goto p3q2;
		break;
	case 'P':
	case 'p':
		goto p2q6;
		break;
	}
p3q2:
	cout << " --: CSS Portion :--" << endl
		<< endl;
	cout << "Q2: By default, a background image will repeat?" << endl
		<< "a)  Only if the background-repeat property is set to repeat" << endl
		<< "b)  Indefinitely, vertically, and horizontally " << endl
		<< "c)  Indefinitely on the horizontal axis only" << endl
		<< "d)  Once, on the x and y axis" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p3q2 = getche();
	system("cls");
	switch (p3q2)
	{
	case 'n':
	case 'N':
		goto p3q3;
		break;
	case 'P':
	case 'p':
		goto p3q1;
		break;
	}
p3q3:
	cout << " --: CSS Portion :--" << endl
		<< endl;
	cout << "Q3: Which style places an element at a fixed location within its container?" << endl
		<< "a)  position: absolute;" << endl
		<< "b)  display: flex;" << endl
		<< "c)  display: block;" << endl
		<< "d)  float: left;" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p3q3 = getche();
	system("cls");
	switch (p3q3)
	{
	case 'n':
	case 'N':
		goto p3q4;
		break;
	case 'P':
	case 'p':
		goto p3q2;
		break;
	}
p3q4:
	cout << " --: CSS Portion :--" << endl
		<< endl;
	cout << "Q4: What is the ::placeholder pseudo-element used for?" << endl
		<< "a)  It is used to format the appearance of placeholder text within a form control" << endl
		<< "b)  It specifies the default input text for a form control" << endl
		<< "c)  It writes text content into a hyperlink tooltip" << endl
		<< "d)  It writes text content into any page element" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p3q4 = getche();
	system("cls");
	switch (p3q4)
	{
	case 'n':
	case 'N':
		goto p3q5;
		break;
	case 'P':
	case 'p':
		goto p3q3;
		break;
	}
p3q5:
	cout << " --: CSS Portion :--" << endl
		<< endl;
	cout << "Q5: You can use the ___ pseudo-class to set a different color on a link if it was clicked on." << endl
		<< "a)  a:visited " << endl
		<< "b)  a:hover" << endl
		<< "c)  a:link" << endl
		<< "d)  a:focus" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p3q5 = getche();
	system("cls");
	switch (p3q5)
	{
	case 'n':
	case 'N':
		goto p3q6;
		break;
	case 'P':
	case 'p':
		goto p3q4;
		break;
	}
p3q6:
	cout << " --: CSS Portion :--" << endl
		<< endl;
	cout << "Q6: What property is used to adjust the space between text characters?" << endl
		<< "a)  font-style" << endl
		<< "b)  text-transform" << endl
		<< "c)  font-variant" << endl
		<< "d)  letter-spacing" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p3q6 = getche();
	system("cls");
	switch (p3q6)
	{
	case 'n':
	case 'N':
		goto p4q1;
		break;
	case 'P':
	case 'p':
		goto p3q5;
		break;
	}
p4q1:
	cout << " --: Javascript Portion :--" << endl
		<< endl;
	cout << "Q1: Which of the following is not an array method?" << endl
		<< "a)  array.slice()" << endl
		<< "b)  array.shift()" << endl
		<< "c)  array.push()" << endl
		<< "d)  array.replace()" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p4q1 = getche();
	system("cls");
	switch (p4q1)
	{
	case 'n':
	case 'N':
		goto p4q2;
		break;
	case 'P':
	case 'p':
		goto p3q6;
		break;
	}
p4q2:
	cout << " --: Javascript Portion :--" << endl
		<< endl;
	cout << "Q2: Which tag pair is used in HTML to embed Javascript" << endl
		<< "a)  <script></script>" << endl
		<< "b)  <js></js>" << endl
		<< "c)  <javascript></javascript>" << endl
		<< "d)  <code></code>" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p4q2 = getche();
	system("cls");
	switch (p4q2)
	{
	case 'n':
	case 'N':
		goto p4q3;
		break;
	case 'P':
	case 'p':
		goto p4q1;
		break;
	}
p4q3:
	cout << " --: Javascript Portion :--" << endl
		<< endl;
	cout << "Q3:Which choice is a valid example for an arrow function? " << endl
		<< "a)  (a,b) => c" << endl
		<< "b)  a,b => {return c;}" << endl
		<< "c)  a,b =>" << endl
		<< "d)  {a, b} => c" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p4q3 = getche();
	system("cls");
	switch (p4q3)
	{
	case 'n':
	case 'N':
		goto p4q4;
		break;
	case 'P':
	case 'p':
		goto p4q2;
		break;
	}
p4q4:
	cout << " --: Javascript Portion :--" << endl
		<< endl;
	cout << "Q4: Which method do you use to attach one DOM node to another?" << endl
		<< "a)  attachNode()" << endl
		<< "b)  appendChild()" << endl
		<< "c)  querySelector()" << endl
		<< "d)  getNode()" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p4q4 = getche();
	system("cls");
	switch (p4q4)
	{
	case 'n':
	case 'N':
		goto p4q5;
		break;
	case 'P':
	case 'p':
		goto p4q3;
		break;
	}
p4q5:
	cout << " --: Javascript Portion :--" << endl
		<< endl;
	cout << "Q5: Which of the following values is not a Boolean false?" << endl
		<< "a)  Boolean(0) " << endl
		<< "b)  Boolean(\"\")" << endl
		<< "c)  Boolean(NaN)" << endl
		<< "d)  Boolean(\"False\")" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p4q5 = getche();
	system("cls");
	switch (p4q5)
	{
	case 'n':
	case 'N':
		goto p4q6;
		break;
	case 'P':
	case 'p':
		goto p4q4;
		break;
	}
p4q6:
	cout << " --: Javascript Portion :--" << endl
		<< endl;
	cout << "Q6: Which of the following is not a keyword in JavaScript?" << endl
		<< "a)  this" << endl
		<< "b)  catch" << endl
		<< "c)  array" << endl
		<< "d)  function" << endl;
	cout << endl
		<< "Enter the selected option here => ";
	p4q6 = getche();
	system("cls");
	switch (p4q6)
	{
	case 'n':
	case 'N':
		goto p4q6;
		break;
	case 'P':
	case 'p':
		goto p4q5;
		break;
	}
	return checker(p1q1, p1q2, p1q3, p1q4, p1q5, p1q6,
	p2q1, p2q2, p2q3, p2q4, p2q5, p2q6,
	p3q1, p3q2, p3q3, p3q4, p3q5, p3q6,
	p4q1, p4q2, p4q3, p4q4, p4q5, p4q6);
}
// Function to check selected option and calculating marks
int checker(char a1,char a2, char a3, char a4, char a5, char a6, char b1 , char b2 , char b3, char b4 , char b5, char b6, char c1,char c2, char c3, char c4, char c5, char c6, char d1 , char d2 , char d3, char d4 ,char d5, char d6 )
{
	int number = 0;
	// C++ Portion Checker 
	switch(a1){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	switch(a2){
		case 'd':
		case 'D':
		number+=1;
		break;
	}
	switch(a3){
		case 'c':
		case 'C':
		number+=1;
		break;
	}
	switch(a4){
		case 'c':
		case 'C':
		number+=1;
		break;
	}
	switch(a5){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	switch(a6){
		case 'c':
		case 'C':
		number+=1;
		break;
	}
	// HTML Portion Checker
	switch(b1){
		case 'd':
		case 'D':
		number+=1;
		break;
	}
	switch(b2){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(b3){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	switch(b4){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(b5){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	switch(b6){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	//CSS Portion Checker
	switch(c1){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(c2){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	switch(c3){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(c4){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(c5){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(c6){
		case 'd':
		case 'D':
		number+=1;
		break;
	}
	// Javascript Portion Checker
	switch(d1){
		case 'd':
		case 'D':
		number+=1;
		break;
	}
	switch(d2){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(d3){
		case 'a':
		case 'A':
		number+=1;
		break;
	}
	switch(d4){
		case 'b':
		case 'B':
		number+=1;
		break;
	}
	switch(d5){
		case 'D':
		case 'd':
		number+=1;
		break;
	}
	switch(d6){
		case 'c':
		case 'C':
		number+=1;
		break;
	}
	return number;
}
// Function for Displaying Result
bool printresult(int score){
	char dummy;
	cout<<" --: Result :--"<<endl<<endl;
	if(score>=13){
		cout<<"Congratulations! You made it and passed quiz by securing "<<score<<" out of "<<tscore<<endl;
	}
	else{
		cout<<"Sorry! you gain "<<score<<" in quiz but the minimum score required to crack exam is 50 percent"<<endl;
	}
	cout<<endl<<"Do you want to give another attempt"<<endl;
	cout<<"a) Yes"<<endl;
	cout<<"b) No"<<endl;
	dummy = getche();
	if(dummy == 'a' || dummy == 'A' || dummy == 'Y' || dummy == 'y'){
		return true;
	}
	if(dummy == 'b' || dummy == 'B' || dummy == 'N' || dummy == 'n'){
		return false;
	}
}
// Function for Teacher Authorization
bool teachercheck(){
	char a,b,c,d;
	cout<<"  --: Teacher Verification :--  "<<endl<<endl;
	cout<<"Enter Your Four Digit Code for Teacher Authorization: ";
	a = getche();
	b = getche();
	c = getche();
	d = getche();
	if(a == '1' && b =='2' && c == '3' && d=='4'){
		return true;
	}
	else{
		return false;
	}
}
// Greeting message (For Passed ones)
void pgreetings(){
	cout<<" --: Greetings Message :--"<<endl<<endl;
}
// Greeting message (For Fail ones)
void fgreetings(){
	cout<<" --: Greetings Message :--"<<endl<<endl;
}