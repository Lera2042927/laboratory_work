namespace Абушаева_с_
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
            textBoxX = new TextBox();
            textBoxZ = new TextBox();
            label2 = new Label();
            textBoxY = new TextBox();
            label3 = new Label();
            CalculateBtn = new Button();
            ResultLabel = new Label();
            label4 = new Label();
            label5 = new Label();
            label6 = new Label();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(11, 236);
            label1.Name = "label1";
            label1.Size = new Size(92, 20);
            label1.TabIndex = 0;
            label1.Text = "Значение X:";
            // 
            // textBoxX
            // 
            textBoxX.BackColor = SystemColors.Window;
            textBoxX.Location = new Point(125, 236);
            textBoxX.Name = "textBoxX";
            textBoxX.Size = new Size(125, 27);
            textBoxX.TabIndex = 1;
            textBoxX.TextChanged += textBoxX_TextChanged;
            // 
            // textBoxZ
            // 
            textBoxZ.Location = new Point(125, 350);
            textBoxZ.Name = "textBoxZ";
            textBoxZ.Size = new Size(125, 27);
            textBoxZ.TabIndex = 3;
            textBoxZ.TextChanged += textBoxZ_TextChanged;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(11, 350);
            label2.Name = "label2";
            label2.Size = new Size(92, 20);
            label2.TabIndex = 2;
            label2.Text = "Значение Z:";
            // 
            // textBoxY
            // 
            textBoxY.Location = new Point(125, 293);
            textBoxY.Name = "textBoxY";
            textBoxY.Size = new Size(125, 27);
            textBoxY.TabIndex = 5;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(13, 293);
            label3.Name = "label3";
            label3.Size = new Size(91, 20);
            label3.TabIndex = 4;
            label3.Text = "Значение Y:";
            label3.Click += label3_Click;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(134, 424);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(125, 29);
            CalculateBtn.TabIndex = 6;
            CalculateBtn.Text = "Рассчитать";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // ResultLabel
            // 
            ResultLabel.AutoSize = true;
            ResultLabel.Location = new Point(12, 472);
            ResultLabel.Name = "ResultLabel";
            ResultLabel.Size = new Size(78, 20);
            ResultLabel.TabIndex = 7;
            ResultLabel.Text = "Результат:";
            ResultLabel.Click += ResultLabel_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(23, 9);
            label4.Name = "label4";
            label4.Size = new Size(283, 20);
            label4.TabIndex = 8;
            label4.Text = "Лабораторная работа №1 задание №1";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(23, 46);
            label5.Name = "label5";
            label5.Size = new Size(717, 20);
            label5.TabIndex = 9;
            label5.Text = "Вычислить значения выражения :p = sin(y / (x + cos(pow(y, 2)))) / (y - 3 + pow(((y - 3) / sin(z)), 1.0 / 5.0))";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(23, 91);
            label6.Name = "label6";
            label6.Size = new Size(725, 20);
            label6.TabIndex = 10;
            label6.Text = "Ограничения: x+cos(pow(y,2))<>0, sin(z)<>0, y-3+pow((y-3)/sin(z),1.0/5.0)<>0, pow((y-3)/sin(z),1.0/5.0)>0 ";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(779, 512);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(ResultLabel);
            Controls.Add(CalculateBtn);
            Controls.Add(textBoxY);
            Controls.Add(label3);
            Controls.Add(textBoxZ);
            Controls.Add(label2);
            Controls.Add(textBoxX);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private TextBox textBoxX;
        private TextBox textBoxZ;
        private Label label2;
        private TextBox textBoxY;
        private Label label3;
        private Button CalculateBtn;
        private Label ResultLabel;
        private Label label4;
        private Label label5;
        private Label label6;
    }
}
