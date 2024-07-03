procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(13, 22);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(22, 23);
        self.label1.TabIndex := 0;
        self.label1.Text := 'X';
        self.label1.Click += label1_Click;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(13, 87);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(22, 23);
        self.label2.TabIndex := 1;
        self.label2.Text := 'Y';
        self.label2.Click += label2_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(41, 19);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(229, 22);
        self.textBox1.TabIndex := 2;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(41, 84);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(229, 22);
        self.textBox2.TabIndex := 3;
        self.textBox2.TextChanged += textBox2_TextChanged;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.2);
        self.button1.Location := new System.Drawing.Point(41, 47);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(48, 31);
        self.button1.TabIndex := 4;
        self.button1.Text := '+';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(41, 150);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(229, 22);
        self.textBox3.TabIndex := 5;
        self.textBox3.TextChanged += textBox3_TextChanged;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.2);
        self.label3.Location := new System.Drawing.Point(12, 149);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(22, 23);
        self.label3.TabIndex := 6;
        self.label3.Text := '=';
        // 
        // button2
        // 
        self.button2.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.2);
        self.button2.Location := new System.Drawing.Point(95, 47);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(48, 31);
        self.button2.TabIndex := 7;
        self.button2.Text := '-';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.2);
        self.button3.Location := new System.Drawing.Point(168, 47);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(48, 31);
        self.button3.TabIndex := 8;
        self.button3.Text := '\';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.2);
        self.button4.Location := new System.Drawing.Point(222, 47);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(48, 31);
        self.button4.TabIndex := 9;
        self.button4.Text := '*';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(282, 251);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.Text := 'Calculator';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
