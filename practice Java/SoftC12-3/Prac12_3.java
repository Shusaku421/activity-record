
//awtクラス
import java.awt.BorderLayout;
import java.awt.Choice;
import java.awt.Color;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

//swingクラス
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

//Prac12_3クラス:JFrameを継承ActionListener, ItemListener, MouseListenerを実装 
public class Prac12_3 extends JFrame implements ActionListener, ItemListener, MouseListener {
	private JPanel panel;//パネル
	private JButton button;//クリアボタン
	private Choice shape;//形状のコンボボックス
	private Choice color;//色のコンボボックス
	private Color[] colorArray = { Color.magenta, Color.cyan, Color.yellow };//カラー
	private String[] itemshape = { "楕円", "直線", "四角形" };//形状
	private String[] itemcolor = { "マゼンタ", "シアン", "イエロー" };//カラー
	static int cthx, cthy, rlsx, rlsy = -1;//マウスの座標を初期化
	private int s, c = 0;//コンボボックスの判定
	static boolean clearFlg = false;//クリアフラグ

	public static void main(String args[]) {
		Prac12_3 frame = new Prac12_3("Prac12_3");
		frame.setVisible(true);
	}

	Prac12_3(String title) {
		setTitle(title);
		setBounds(100, 100, 600, 400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		int i;
		panel = new JPanel();//パネルインスタンス
		button = new JButton("クリア"); //ボタンインスタンス
		shape = new Choice();//形状コンボボックスインスタンス
		color = new Choice();//色コンボボックスインスタンス
		for (i = 0; i < 3; i++) {//3回繰り返す（アイテムをそれぞれのコンボボックスに追加）
			shape.addItem(itemshape[i]);
			color.addItem(itemcolor[i]);
		}
		//コンポーネントの追加
		panel.add(button);
		panel.add(shape);
		panel.add(color);

		Container contentPane = getContentPane();
		contentPane.add(panel, BorderLayout.CENTER);

		//リスナー追加
		button.addActionListener(this);
		shape.addItemListener(this);
		color.addItemListener(this);
		addMouseListener(this);
	}

	public void paint(Graphics g) {
		if (clearFlg == true) {//clearFlgがtrueの場合画面をクリア
			g.setColor(getBackground());
			g.fillRect(0, 0, getSize().width, getSize().height);
			clearFlg = false;
		} else {
			g.setColor(colorArray[c]);//色設定
			switch (s) {//sから形状を読み取り
			case 0://sが0の場合、楕円を描画
				g.drawOval(cthx, cthy, rlsx, rlsy);
				repaint();
				break;
			case 1://sが1の場合、直線を描画
				g.drawLine(cthx, cthy, rlsx, rlsy);
				repaint();
				break;
			case 2://sが2の場、合四角形を描画
				g.drawRect(cthx, cthy, rlsx, rlsy);
				repaint();
				break;
			}
		}
	}

	@Override
	public void itemStateChanged(ItemEvent e) {//コンボボックスが押されたら
		if (e.getSource() == shape) {//形状コンボボックスが押されたら
			s = shape.getSelectedIndex();//コンボボックスの何番目が押された？
		} else if (e.getSource() == color) {//色コンボボックスが押されたら
			c = color.getSelectedIndex();//コンボボックスの何番目が押された？
		}
	}

	public void update(Graphics g) {
		paint(g);
	}

	@Override
	public void actionPerformed(ActionEvent e) {//ボタンが押されたら
		if (e.getSource() == button) {
			clearFlg = true;//クリアフラグをtrue
			repaint();
		}
	}

	@Override
	public void mouseClicked(MouseEvent e) {
	}

	@Override
	public void mousePressed(MouseEvent e) {//始点入手
		cthx = e.getX();
		cthy = e.getY();
	}

	@Override
	public void mouseReleased(MouseEvent e) {//終点入手
		rlsx = e.getX();
		rlsy = e.getY();
		repaint();
	}

	@Override
	public void mouseEntered(MouseEvent e) {
	}

	@Override
	public void mouseExited(MouseEvent e) {
	}
}