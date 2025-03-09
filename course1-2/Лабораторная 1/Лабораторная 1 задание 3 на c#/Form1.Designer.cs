namespace Лабораторная_1_задание_3_на_c_
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
            label3 = new Label();
            label4 = new Label();
            button1 = new Button();
            label5 = new Label();
            textBoxIsx = new TextBox();
            label6 = new Label();
            textBoxResult = new TextBox();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(299, 9);
            label1.Name = "label1";
            label1.Size = new Size(266, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа №1 задание 3";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(49, 38);
            label2.Name = "label2";
            label2.Size = new Size(886, 20);
            label2.TabIndex = 1;
            label2.Text = "Дана строка-предложение на русском языке. Преобразовать строку так,чтобы каждое слово начиналось с заглавной буквы. ";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(68, 58);
            label3.Name = "label3";
            label3.Size = new Size(845, 20);
            label3.TabIndex = 2;
            label3.Text = "Словом считать набор символов, не содержащий пробелов и ограниченный пробелами или началом/концом строки.";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(251, 78);
            label4.Name = "label4";
            label4.Size = new Size(340, 20);
            label4.TabIndex = 3;
            label4.Text = "Слова, не начинающиеся с буквы, не изменять.";
            // 
            // button1
            // 
            button1.Location = new Point(386, 296);
            button1.Name = "button1";
            button1.Size = new Size(94, 29);
            button1.TabIndex = 4;
            button1.Text = "Вывести";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(12, 135);
            label5.Name = "label5";
            label5.Size = new Size(126, 20);
            label5.TabIndex = 5;
            label5.Text = "Исходная строка";
            // 
            // textBoxIsx
            // 
            textBoxIsx.Location = new Point(161, 128);
            textBoxIsx.Name = "textBoxIsx";
            textBoxIsx.Size = new Size(774, 27);
            textBoxIsx.TabIndex = 6;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(22, 193);
            label6.Name = "label6";
            label6.Size = new Size(75, 20);
            label6.TabIndex = 7;
            label6.Text = "Результат";
            label6.Click += label6_Click;
            // 
            // textBoxResult
            // 
            textBoxResult.Location = new Point(161, 193);
            textBoxResult.Name = "textBoxResult";
            textBoxResult.Size = new Size(774, 27);
            textBoxResult.TabIndex = 8;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(955, 529);
            Controls.Add(textBoxResult);
            Controls.Add(label6);
            Controls.Add(textBoxIsx);
            Controls.Add(label5);
            Controls.Add(button1);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Button button1;
        private Label label5;
        private TextBox textBoxIsx;
        private Label label6;
        private TextBox textBoxResult;
    }
}
