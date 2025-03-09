namespace Лабораторная_1_задание_3_на_c_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            // Получаем текст из textBoxIsx
            string input = textBoxIsx.Text;
            // Преобразуем строку
            string result = CapitalizeWords(input);
            // Выводим результат в textBoxResult
            textBoxResult.Text = result;
        }

        private string CapitalizeWords(string str)
        {
            // Разбиваем строку на слова по пробелам
            var words = str.Split(' ');

            for (int i = 0; i < words.Length; i++)
            {
                // Проверяем, начинается ли слово с буквы
                if (!string.IsNullOrEmpty(words[i]) && char.IsLetter(words[i][0]))
                {
                    // Делаем первую букву заглавной
                    words[i] = char.ToUpper(words[i][0]) + words[i].Substring(1);
                }
            }

            // Объединяем слова обратно в строку
            return string.Join(" ", words);
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
