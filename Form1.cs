using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculadora
{
    public partial class Form1 : Form
    {
        double n1 = 0, n2 = 0;
        char operador;

        public Form1()
        {
            InitializeComponent();
        }

        private void agregarNumero(object sender, EventArgs e)
        {
            var boton = ((Button)sender);

            if (textResultado.Text == "0")
            textResultado.Text = "";

            textResultado.Text += boton.Text;

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click_1(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {

        }

        private void btnResultado_Click(object sender, EventArgs e)  // Esta uncion espara representar el resulatdo final de las operaciones
        {
            n2 = Convert.ToDouble(textResultado.Text);

            if (operador == '+')
            {
                textResultado.Text = (n1 + n2).ToString();
                n1 = Convert.ToDouble(textResultado.Text);
            }
            else if (operador == '-')
            {
                textResultado.Text = (n1 - n2).ToString();
                n1 = Convert.ToDouble(textResultado.Text);
            }
            else if (operador == 'X')
            {
                textResultado.Text = (n1 * n2).ToString();
                n1 = Convert.ToDouble(textResultado.Text);
            }
            else if (operador == '/')
            {
                if (textResultado.Text != "0")
                {
                    textResultado.Text = (n1 / n2).ToString();
                    n1 = Convert.ToDouble(textResultado.Text);
                }
                else
                {
                    MessageBox.Show("No se puede dividir por 0!!"); // Muestra un mensaje
                }
            }
        }

        private void btnEliminar_Click(object sender, EventArgs e)  //  Esta funcion sirve para eliminar un coeficiente a la vez
        {
            if (textResultado.Text.Length > 1)  // Cuando haya un coeficiente en la pantalla mayor a 1, este se eliminara
            {
                textResultado.Text = textResultado.Text.Substring(0, textResultado.Text.Length - 1);
            }
            else
            {
                textResultado.Text = "0";
            }
        }

        private void btnBorrarTodo_Click(object sender, EventArgs e)  // Esta funcion sirve para borrar todo los datos almacenados
        {
            n1 = 0;
            n2 = 0;
            operador = '\0';
            textResultado.Text = "0";
        }

        private void btnBorrar_Click(object sender, EventArgs e) // Solo borra los datos de una parte del los coeficientes
        {
            textResultado.Text = "0";
        }

        private void btnPunto_Click(object sender, EventArgs e)
        {
            if (!textResultado.Text.Contains("."))
            {
                textResultado.Text += ".";
            }
        }

        private void btnSigno_Click(object sender, EventArgs e)
        {
            n1 = Convert.ToDouble(textResultado.Text);
            n1 *= -1;
            textResultado.Text = n1.ToString();

        }

        private void clikOperador (object sender, EventArgs e)
        {
            var boton = ((Button)sender); // para pulsar el boton de la suma
            n1 = Convert.ToDouble(textResultado.Text);
            operador = Convert.ToChar(boton.Tag); // Para pulsar el boton de suma

            if (operador == '²')
            {
                n1 = Math.Pow (n1, 2);
                textResultado.Text = n1.ToString();
            }
            else if (operador == '√')
            {
                n1 = Math.Sqrt(n1);
                textResultado.Text = n1.ToString();
            }
            else
            { 
                textResultado.Text = "0"; // Es para reflejar el segundo coeficiente
            }

        }

    }
}
