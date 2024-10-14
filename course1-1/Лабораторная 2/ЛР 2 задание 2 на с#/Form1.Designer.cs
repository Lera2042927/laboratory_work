namespace ЛР_2_задание_2_на_с_
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
            label2 = new Label();
            pictureBox1 = new PictureBox();
            label3 = new Label();
            listBox1 = new ListBox();
            CalculateBtn = new Button();
            listBox2 = new ListBox();
            label4 = new Label();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(3, 9);
            label1.Name = "label1";
            label1.Size = new Size(266, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа №2 задание 2";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(3, 40);
            label2.Name = "label2";
            label2.Size = new Size(473, 20);
            label2.TabIndex = 1;
            label2.Text = "Напечатать значения очередной пары xi, yi последовательностей:";
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources.photo_2024_10_12_01_15_02;
            pictureBox1.Location = new Point(3, 110);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(288, 152);
            pictureBox1.TabIndex = 2;
            pictureBox1.TabStop = false;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.ForeColor = Color.Red;
            label3.Location = new Point(481, 99);
            label3.Name = "label3";
            label3.Size = new Size(20, 20);
            label3.TabIndex = 3;
            label3.Text = "xi";
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.Location = new Point(462, 122);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(80, 144);
            listBox1.TabIndex = 4;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(294, 370);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(182, 29);
            CalculateBtn.TabIndex = 5;
            CalculateBtn.Text = "Получить результат";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // listBox2
            // 
            listBox2.FormattingEnabled = true;
            listBox2.Location = new Point(611, 122);
            listBox2.Name = "listBox2";
            listBox2.Size = new Size(80, 144);
            listBox2.TabIndex = 6;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.ForeColor = Color.Red;
            label4.Location = new Point(637, 99);
            label4.Name = "label4";
            label4.Size = new Size(20, 20);
            label4.TabIndex = 7;
            label4.Text = "yi";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(label4);
            Controls.Add(listBox2);
            Controls.Add(CalculateBtn);
            Controls.Add(listBox1);
            Controls.Add(label3);
            Controls.Add(pictureBox1);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private PictureBox pictureBox1;
        private Label label3;
        private ListBox listBox1;
        private Button CalculateBtn;
        private ListBox listBox2;
        private Label label4;
    }
}
