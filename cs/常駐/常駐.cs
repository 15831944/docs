using System;
using System.Drawing;
using System.Windows.Forms;

// http://pineplanter.moo.jp/non-it-salaryman/2017/06/01/c-sharp-tasktray/
namespace TaskTest {
	class ResidentTest : Form{
		public ResidentTest(){
			// point2. �^�X�N�o�[�ɕ\�������Ȃ�
			this.ShowInTaskbar = false;
			this.SetComponents();
		}

		private void Close_Click(object sender, EventArgs e){
			MessageBox.Show("�����܂�");
			Application.Exit();
		}
		private void About_Click(object sender, EventArgs e){
			MessageBox.Show("Ver.1(190906)");
		}

		private void SetComponents(){
			// point3. NotifyIcon���g���A�^�X�N�g���C�ɃA�C�R����\��������
			NotifyIcon icon = new NotifyIcon();
			icon.Icon = new Icon("app.ico");
			icon.Visible = true;
			icon.Text = "�풓�A�v���e�X�g";

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