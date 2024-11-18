namespace Лабораторная_5_задание_1_на_c_
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
            textBoxN = new TextBox();
            label5 = new Label();
            label6 = new Label();
            label7 = new Label();
            dataGridViewX = new DataGridView();
            CalculateBtn = new Button();
            dataGridViewY = new DataGridView();
            dataGridViewResult = new DataGridView();
            label8 = new Label();
            textBoxMin_limit = new TextBox();
            label9 = new Label();
            textBoxMax_limit = new TextBox();
            ((System.ComponentModel.ISupportInitialize)dataGridViewX).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridViewY).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridViewResult).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(343, 9);
            label1.Name = "label1";
            label1.Size = new Size(196, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная 5 задание 1";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(228, 29);
            label2.Name = "label2";
            label2.Size = new Size(489, 20);
            label2.TabIndex = 1;
            label2.Text = " Заданы массивы: вещественных чисел Х(N), натуральных чиселY(N).";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(67, 49);
            label3.Name = "label3";
            label3.Size = new Size(786, 20);
            label3.TabIndex = 2;
            label3.Text = "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y. ";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(12, 96);
            label4.Name = "label4";
            label4.Size = new Size(80, 20);
            label4.TabIndex = 3;
            label4.Text = "Введите n:";
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(98, 89);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 4;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.ForeColor = Color.Red;
            label5.Location = new Point(67, 255);
            label5.Name = "label5";
            label5.Size = new Size(78, 20);
            label5.TabIndex = 5;
            label5.Text = "Массив X ";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.ForeColor = Color.Red;
            label6.Location = new Point(466, 255);
            label6.Name = "label6";
            label6.Size = new Size(73, 20);
            label6.TabIndex = 6;
            label6.Text = "Массив Y";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.ForeColor = Color.Red;
            label7.Location = new Point(829, 255);
            label7.Name = "label7";
            label7.Size = new Size(182, 20);
            label7.TabIndex = 7;
            label7.Text = "Результирующий массив";
            // 
            // dataGridViewX
            // 
            dataGridViewX.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridViewX.Location = new Point(29, 291);
            dataGridViewX.Name = "dataGridViewX";
            dataGridViewX.RowHeadersWidth = 51;
            dataGridViewX.Size = new Size(170, 307);
            dataGridViewX.TabIndex = 8;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(343, 178);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(359, 33);
            CalculateBtn.TabIndex = 9;
            CalculateBtn.Text = "Получить результирующий массив";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // dataGridViewY
            // 
            dataGridViewY.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridViewY.Location = new Point(409, 291);
            dataGridViewY.Name = "dataGridViewY";
            dataGridViewY.RowHeadersWidth = 51;
            dataGridViewY.Size = new Size(172, 307);
            dataGridViewY.TabIndex = 10;
            // 
            // dataGridViewResult
            // 
            dataGridViewResult.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridViewResult.Location = new Point(772, 291);
            dataGridViewResult.Name = "dataGridViewResult";
            dataGridViewResult.RowHeadersWidth = 51;
            dataGridViewResult.Size = new Size(322, 307);
            dataGridViewResult.TabIndex = 11;
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(313, 92);
            label8.Name = "label8";
            label8.Size = new Size(182, 20);
            label8.TabIndex = 12;
            label8.Text = "Введите нижний предел:";
            // 
            // textBoxMin_limit
            // 
            textBoxMin_limit.Location = new Point(501, 89);
            textBoxMin_limit.Name = "textBoxMin_limit";
            textBoxMin_limit.Size = new Size(125, 27);
            textBoxMin_limit.TabIndex = 13;
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Location = new Point(682, 92);
            label9.Name = "label9";
            label9.Size = new Size(185, 20);
            label9.TabIndex = 14;
            label9.Text = "Введите верхний предел:";
            // 
            // textBoxMax_limit
            // 
            textBoxMax_limit.Location = new Point(886, 85);
            textBoxMax_limit.Name = "textBoxMax_limit";
            textBoxMax_limit.Size = new Size(125, 27);
            textBoxMax_limit.TabIndex = 15;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1106, 610);
            Controls.Add(textBoxMax_limit);
            Controls.Add(label9);
            Controls.Add(textBoxMin_limit);
            Controls.Add(label8);
            Controls.Add(dataGridViewResult);
            Controls.Add(dataGridViewY);
            Controls.Add(CalculateBtn);
            Controls.Add(dataGridViewX);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(textBoxN);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)dataGridViewX).EndInit();
            ((System.ComponentModel.ISupportInitialize)dataGridViewY).EndInit();
            ((System.ComponentModel.ISupportInitialize)dataGridViewResult).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private TextBox textBoxN;
        private Label label5;
        private Label label6;
        private Label label7;
        private DataGridView dataGridViewX;
        private Button CalculateBtn;
        private DataGridView dataGridViewY;
        private DataGridView dataGridViewResult;
        private Label label8;
        private TextBox textBoxMin_limit;
        private Label label9;
        private TextBox textBoxMax_limit;
    }
}
