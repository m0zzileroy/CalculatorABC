Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure textBox2_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure label1_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure label2_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure textBox3_TextChanged(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    label1: &Label;
    label2: &Label;
    textBox1: TextBox;
    button1: Button;
    textBox3: TextBox;
    label3: &Label;
    button2: Button;
    button3: Button;
    button4: Button;
    label4: &Label;
    textBox2: TextBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
      label4.visible := false;
    end;
  end;

implementation
var a, b, c: real;

procedure Error;
 begin
   MessageBox.Show('unknown data')
 end;
 
procedure Form1.textBox2_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  var a, b, c: real;
  var from := 1;
  textBox3.text:='';
  if not StringIsEmpty(textBox1.Text, from) and not StringisEmpty(textBox2.Text, from) then
      begin
      try
      label4.visible := false;
      a := strtoreal(textBox1.text);
      b := strtoreal(textBox2.Text);
      textBox3.text := (a + b).ToString
      except
        Error
      end
      end
  else
    begin
      label4.visible := true
    end
    
end;

procedure Form1.label1_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.label2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.textBox3_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  var a, b, c: real;
  var from := 1;
  textBox3.text:='';
  if not StringIsEmpty(textBox1.Text, from) and not StringisEmpty(textBox2.Text, from) then
      begin
      try
      label4.visible := false;
      a := strtoreal(textBox1.text);
      b := strtoreal(textBox2.Text);
      textBox3.text := (a - b).ToString
      except
        Error
      end
      end
  else
    begin
      label4.visible := true
    end
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  var a, b, c: real;
  var from := 1;
  textBox3.text:='';
  if not StringIsEmpty(textBox1.Text, from) and not StringisEmpty(textBox2.Text, from) then
      begin
      try
      label4.visible := false;
      a := strtoreal(textBox1.text);
      b := strtoreal(textBox2.Text);
      textBox3.text := (a / b).ToString
      except
        Error
      end
      end
  else
    begin
      label4.visible := true
    end
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  var a, b, c: real;
  var from := 1;
  textBox3.text:='';
  if not StringIsEmpty(textBox1.Text, from) and not StringisEmpty(textBox2.Text, from) then
      begin
      try
      label4.visible := false;
      a := strtoreal(textBox1.text);
      b := strtoreal(textBox2.Text);
      textBox3.text := (a * b).ToString
      except
        Error
      end
      end
  else
    begin
      label4.visible := true
    end
end;

end.
