namespace ЛР__1__3_с_______
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            labelResult = new Label();
            listBox1 = new ListBox();
            listBox2 = new ListBox();
            listBox3 = new ListBox();
            listBox4 = new ListBox();
            button1 = new Button();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            label6 = new Label();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(0, 0);
            label1.Name = "label1";
            label1.Size = new Size(266, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа №1 задание 3";
            // 
            // labelResult
            // 
            labelResult.AutoSize = true;
            labelResult.Location = new Point(40, 368);
            labelResult.Name = "labelResult";
            labelResult.Size = new Size(75, 20);
            labelResult.TabIndex = 1;
            labelResult.Text = "Результат";
            labelResult.Click += labelResult_Click;
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.Items.AddRange(new object[] { "1 - Samsung", "2 - Dell" });
            listBox1.Location = new Point(25, 102);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(109, 44);
            listBox1.TabIndex = 2;
            // 
            // listBox2
            // 
            listBox2.FormattingEnabled = true;
            listBox2.Items.AddRange(new object[] { "1 -14", "2 -15" });
            listBox2.Location = new Point(311, 103);
            listBox2.Name = "listBox2";
            listBox2.Size = new Size(124, 44);
            listBox2.TabIndex = 3;
            // 
            // listBox3
            // 
            listBox3.FormattingEnabled = true;
            listBox3.Items.AddRange(new object[] { "1 - 720*1280", "2 - 520*1280" });
            listBox3.Location = new Point(25, 231);
            listBox3.Name = "listBox3";
            listBox3.Size = new Size(138, 64);
            listBox3.TabIndex = 4;
            // 
            // listBox4
            // 
            listBox4.FormattingEnabled = true;
            listBox4.Items.AddRange(new object[] { "1 - 60", "2 - 120" });
            listBox4.Location = new Point(305, 231);
            listBox4.Name = "listBox4";
            listBox4.Size = new Size(130, 64);
            listBox4.TabIndex = 5;
            // 
            // button1
            // 
            button1.Location = new Point(394, 338);
            button1.Name = "button1";
            button1.Size = new Size(192, 50);
            button1.TabIndex = 6;
            button1.Text = "Определить стоимость";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(0, 34);
            label2.Name = "label2";
            label2.Size = new Size(265, 20);
            label2.TabIndex = 7;
            label2.Text = "Выберите характеристики монитора";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.ForeColor = Color.Red;
            label3.Location = new Point(0, 79);
            label3.Name = "label3";
            label3.Size = new Size(189, 20);
            label3.TabIndex = 8;
            label3.Text = "Выберите производителя";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.ForeColor = Color.Red;
            label4.Location = new Point(279, 79);
            label4.Name = "label4";
            label4.Size = new Size(186, 20);
            label4.TabIndex = 9;
            label4.Text = "Выберите размер экрана";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.ForeColor = Color.Red;
            label5.Location = new Point(0, 195);
            label5.Name = "label5";
            label5.Size = new Size(221, 20);
            label5.TabIndex = 10;
            label5.Text = "Выберите разрешение экрана";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.ForeColor = Color.Red;
            label6.Location = new Point(279, 195);
            label6.Name = "label6";
            label6.Size = new Size(205, 20);
            label6.TabIndex = 11;
            label6.Text = "Выберите кадровую частоту";
            label6.Click += label6_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(button1);
            Controls.Add(listBox4);
            Controls.Add(listBox3);
            Controls.Add(listBox2);
            Controls.Add(listBox1);
            Controls.Add(labelResult);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label labelResult;
        private ListBox listBox1;
        private ListBox listBox2;
        private ListBox listBox3;
        private ListBox listBox4;
        private Button button1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private Label label6;
    }
}
