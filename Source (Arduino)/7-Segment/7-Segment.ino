const int top_B = 0;
const int top_A = 1;
const int middle_B = 9;
const int middle_A = 8;
const int bottom_B = 12;
const int bottom_A = 13;

const int left_upper_B = 7;
const int left_upper_A = 6;
const int left_lower_B = 4;
const int left_lower_A = 5;

const int right_upper_B = 3;
const int right_upper_A = 2;
const int right_lower_B = 10;
const int right_lower_A = 11;

bool bFlag = true;

void setup() 
{
  // put your setup code here, to run once:

  pinMode(top_B, OUTPUT);
  pinMode(top_A, OUTPUT);
  pinMode(middle_B, OUTPUT);
  pinMode(middle_A, OUTPUT);
  pinMode(bottom_B, OUTPUT);
  pinMode(bottom_A, OUTPUT);

  pinMode(left_upper_B, OUTPUT);
  pinMode(left_upper_A, OUTPUT);
  pinMode(left_lower_B, OUTPUT);
  pinMode(left_lower_A, OUTPUT);

  pinMode(right_upper_B, OUTPUT);
  pinMode(right_upper_A, OUTPUT);
  pinMode(right_lower_B, OUTPUT);
  pinMode(right_lower_A, OUTPUT);
}

void loop() 
{
  for(int i=0;i<10;i++)
  {
    number(i);

    delay(1000);
  }
}


void number(int iNum)
{
  switch(iNum)
  {
    case 1:
      top_white();
      middle_white();
      bottom_white();
      left_upper_white();
      left_lower_white();    
      right_upper_black();
      right_lower_black();
      break;

    case 2:
      top_black();
      middle_black();
      bottom_black();
      left_upper_white();
      left_lower_black();
      right_upper_black();
      right_lower_white();
      break;
      
    case 3:
      top_black();
      middle_black();
      bottom_black();
      left_upper_white();
      left_lower_white();
      right_upper_black();
      right_lower_black();
      break;
      
    case 4:
      top_white();
      middle_black();
      bottom_white();
      left_upper_black();
      left_lower_white();
      right_upper_black();
      right_lower_black();
      break;
      
    case 5:
      top_black();
      middle_black();
      bottom_black();
      left_upper_black();
      left_lower_white();
      right_upper_white();
      right_lower_black();
      break;
      
    case 6:
      top_white();
      middle_black();
      bottom_black();
      left_upper_black();
      left_lower_black();
      right_upper_white();
      right_lower_black();
      break;
      
    case 7:
      top_black();
      middle_white();
      bottom_white();
      left_upper_black();
      left_lower_white();
      right_upper_black();
      right_lower_black();
      break;
      
    case 8:
      top_black();
      middle_black();
      bottom_black();
      left_upper_black();
      left_lower_black();
      right_upper_black();
      right_lower_black();
      break;
      
    case 9:
      top_black();
      middle_black();
      bottom_black();
      left_upper_black();
      left_lower_white();
      right_upper_black();
      right_lower_black();
      break;
      
    case 0:
      top_black();
      middle_white();
      bottom_black();
      left_upper_black();
      left_lower_black();
      right_upper_black();
      right_lower_black();
      break;
      
    default:
      break;
    
  }

}



void top_black()
{ digitalWrite(top_B, LOW);   digitalWrite(top_A, HIGH); }

void middle_black()
{ digitalWrite(middle_B, LOW);   digitalWrite(middle_A, HIGH); }

void bottom_black()
{ digitalWrite(bottom_B, LOW);   digitalWrite(bottom_A, HIGH); }

void left_upper_black()
{ digitalWrite(left_upper_B, LOW);   digitalWrite(left_upper_A, HIGH); }

void left_lower_black()
{ digitalWrite(left_lower_B, LOW);   digitalWrite(left_lower_A, HIGH); }

void right_upper_black()
{ digitalWrite(right_upper_B, LOW);   digitalWrite(right_upper_A, HIGH); }

void right_lower_black()
{ digitalWrite(right_lower_B, LOW);   digitalWrite(right_lower_A, HIGH); }


void top_white()
{ digitalWrite(top_B, HIGH);  digitalWrite(top_A, LOW); }

void middle_white()
{ digitalWrite(middle_B, HIGH);  digitalWrite(middle_A, LOW); }

void bottom_white()
{ digitalWrite(bottom_B, HIGH);  digitalWrite(bottom_A, LOW); }

void left_upper_white()
{ digitalWrite(left_upper_B, HIGH);  digitalWrite(left_upper_A, LOW); }

void left_lower_white()
{ digitalWrite(left_lower_B, HIGH);  digitalWrite(left_lower_A, LOW); }

void right_upper_white()
{ digitalWrite(right_upper_B, HIGH);  digitalWrite(right_upper_A, LOW); }

void right_lower_white()
{ digitalWrite(right_lower_B, HIGH);  digitalWrite(right_lower_A, LOW); }
