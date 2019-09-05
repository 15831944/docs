using System;
using System.Drawing;
using System.Windows.Forms;
using System.Threading; // Add

// http://pineplanter.moo.jp/non-it-salaryman/2017/06/03/c-sharp-thread/
namespace TaskTest {
	class ResidentTest : Form{
		private Thread thread; // Add

		public ResidentTest(){
			this.ShowInTaskbar = false;
			this.SetComponents();
			// point1. Thread�N���X����
			thread = new Thread(IntervalCheck); // Add
			thread.Start();                     //
		}

		private void Close_Click(object sender, EventArgs e){
			// point3. �X���b�h�̌�n��
			thread.Abort(); // Add
			MessageBox.Show("�����܂�");
			Application.Exit();
		}
		private void About_Click(object sender, EventArgs e){
			MessageBox.Show("Ver.1(190906)");
		}

		// Add Method
		// point2. �ʃX���b�h����
		private void IntervalCheck() {
			const int ms = 10000;
			int cnt = 0;
			while(true){
				System.Threading.Thread.Sleep(ms); // 10.000�b�x�~
				cnt++;
				MessageBox.Show($"{ms}ms�o�߂��܂����B({cnt.ToString()}���)");
			}
		}

		private void SetComponents(){
			// point3. NotifyIcon���g���A�^�X�N�g���C�ɃA�C�R����\��������
			NotifyIcon icon = new NotifyIcon();
			icon.Icon = new Icon("app.ico");
			icon.Visible = true;
			icon.Text = "�풓�e�X�g(������b�Z�[�W)";

			// point4. �E�N���b�N���j���[
			ContextMenuStrip menu = new ContextMenuStrip();
			ToolStripMenuItem menuItem1 = new ToolStripMenuItem();
			menuItem1.Text = "&�I��";
			menuItem1.Click += new EventHandler(Close_Click);
			ToolStripMenuItem menuItem2 = new ToolStripMenuItem();
			menuItem2.Text = "&About";
			menuItem2.Click += new EventHandler(About_Click);
			menu.Items.AddRange(new ToolStripMenuItem[] {
				menuItem1,
				menuItem2
			});
			icon.ContextMenuStrip = menu;
		}
	}

	class MainWindow{
		static void Main(){
			 // point1. �t�H�[����\�������Ȃ�
			 // �uApplication.Run(ResidentTest());�v���ƌ�����B
			ResidentTest rm = new ResidentTest();
			Application.Run();
		}
	}

}