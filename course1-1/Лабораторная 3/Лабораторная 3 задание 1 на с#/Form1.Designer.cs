namespace Лабораторная_3_задание_1_на_с_
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
            label5 = new Label();
            label6 = new Label();
            label7 = new Label();
            textBoxN = new TextBox();
            textBoxMin_limit = new TextBox();
            textBoxMax_limit = new TextBox();
            CalculateBtn = new Button();
            DataGridView1 = new DataGridView();
            labelMax = new Label();
            textBoxMaxValue = new TextBox();
            label9 = new Label();
            label10 = new Label();
            textBoxPositive_Sum = new TextBox();
            textBoxNegative_Sum = new TextBox();
            ((System.ComponentModel.ISupportInitialize)DataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(12, 9);
            label1.Name = "label1";
            label1.Size = new Size(249, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа 3 задание 1";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(231, 50);
            label2.Name = "label2";
            label2.Size = new Size(311, 20);
            label2.TabIndex = 1;
            label2.Text = "Дан одномерный массив случайных чисел.";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(123, 70);
            label3.Name = "label3";
            label3.Size = new Size(564, 20);
            label3.TabIndex = 2;
            label3.Text = "Найти сумму положительных элементов, расположенных после max  элемента";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(147, 90);
            label4.Name = "label4";
            label4.Size = new Size(500, 20);
            label4.TabIndex = 3;
            label4.Text = "и сумму отрицательных элементов, расположенных до max элемента.";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(-2, 145);
            label5.Name = "label5";
            label5.Size = new Size(225, 20);
            label5.TabIndex = 4;
            label5.Text = "Введите размерность массива:";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(-2, 180);
            label6.Name = "label6";
            label6.Size = new Size(182, 20);
            label6.TabIndex = 5;
            label6.Text = "Введите нижний предел:";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(-2, 222);
            label7.Name = "label7";
            label7.Size = new Size(185, 20);
            label7.TabIndex = 6;
            label7.Text = "Введите верхний предел:";
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(231, 138);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 7;
            // 
            // textBoxMin_limit
            // 
            textBoxMin_limit.Location = new Point(231, 180);
            textBoxMin_limit.Name = "textBoxMin_limit";
            textBoxMin_limit.Size = new Size(125, 27);
            textBoxMin_limit.TabIndex = 8;
            // 
            // textBoxMax_limit
            // 
            textBoxMax_limit.Location = new Point(231, 222);
            textBoxMax_limit.Name = "textBoxMax_limit";
            textBoxMax_limit.Size = new Size(125, 27);
            textBoxMax_limit.TabIndex = 9;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(138, 270);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(526, 29);
            CalculateBtn.TabIndex = 10;
            CalculateBtn.Text = "Сгенерировать элементы одномерного массива и получить результат";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // DataGridView1
            // 
            DataGridView1.ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle.None;
            DataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            DataGridView1.Location = new Point(12, 392);
            DataGridView1.Name = "DataGridView1";
            DataGridView1.RowHeadersWidth = 51;
            DataGridView1.Size = new Size(185, 188);
            DataGridView1.TabIndex = 11;
            DataGridView1.CellContentClick += dataGridView1_CellContentClick;
            // 
            // labelMax
            // 
            labelMax.AutoSize = true;
            labelMax.Location = new Point(28, 332);
            labelMax.Name = "labelMax";
            labelMax.Size = new Size(98, 20);
            labelMax.TabIndex = 13;
            labelMax.Text = "Max элемент";
            // 
            // textBoxMaxValue
            // 
            textBoxMaxValue.Location = new Point(355, 325);
            textBoxMaxValue.Name = "textBoxMaxValue";
            textBoxMaxValue.Size = new Size(125, 27);
            textBoxMaxValue.TabIndex = 14;
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Location = new Point(231, 392);
            label9.Name = "label9";
            label9.Size = new Size(395, 20);
            label9.TabIndex = 15;
            label9.Text = "Сумма положительных элементов после max элемента";
            label9.Click += label9_Click;
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Location = new Point(231, 438);
            label10.Name = "label10";
            label10.Size = new Size(366, 20);
            label10.TabIndex = 16;
            label10.Text = "Сумма отрицательных элементов до max элемента";
            // 
            // textBoxPositive_Sum
            // 
            textBoxPositive_Sum.Location = new Point(656, 387);
            textBoxPositive_Sum.Name = "textBoxPositive_Sum";
            textBoxPositive_Sum.Size = new Size(125, 27);
            textBoxPositive_Sum.TabIndex = 17;
            textBoxPositive_Sum.TextChanged += textBoxPol_Sum_TextChanged;
            // 
            // textBoxNegative_Sum
            // 
            textBoxNegative_Sum.Location = new Point(656, 438);
            textBoxNegative_Sum.Name = "textBoxNegative_Sum";
            textBoxNegative_Sum.Size = new Size(125, 27);
            textBoxNegative_Sum.TabIndex = 18;
            textBoxNegative_Sum.TextChanged += textBox2_TextChanged;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 628);
            Controls.Add(textBoxNegative_Sum);
            Controls.Add(textBoxPositive_Sum);
            Controls.Add(label10);
            Controls.Add(label9);
            Controls.Add(textBoxMaxValue);
            Controls.Add(labelMax);
            Controls.Add(DataGridView1);
            Controls.Add(CalculateBtn);
            Controls.Add(textBoxMax_limit);
            Controls.Add(textBoxMin_limit);
            Controls.Add(textBoxN);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)DataGridView1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private Label label6;
        private Label label7;
        private TextBox textBoxN;
        private TextBox textBoxMin_limit;
        private TextBox textBoxMax_limit;
        private Button CalculateBtn;
        private DataGridView DataGridView1;
        private Label labelMax;
        private TextBox textBoxMaxValue;
        private Label label9;
        private Label label10;
        private TextBox textBoxPositive_Sum;
        private TextBox textBoxNegative_Sum;
    }
}
