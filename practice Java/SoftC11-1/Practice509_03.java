
// Practice509_03クラス:各種GUI部品の使用
//AWTのクラス
import java.awt.Container;
import java.awt.FlowLayout;

//Swingのクラス
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class Practice509_03 extends JFrame {//JFrameを継承
	private Container cntnr; //フレームの表示領域
	private FlowLayout flow; //コンポーネントの配置を制御

	//三つのコンポーネント
	private JTextField text1; //テキストフィールド
	private JButton button1; //ボタン1
	private JButton button2; //ボタン2

	Practice509_03(String title) {//コンストラクタでフレーム設定
		super(title); //タイトルの設定
		setBounds(200, 200, 450, 300); //位置とサイズの設定
		setDefaultCloseOperation(EXIT_ON_CLOSE);//フレームを閉じたらプログラム終了
	}

	public static void main(String[] args) {//メインメソッド
		Practice509_03 frame = new Practice509_03("Practice509_03");//自クラスのインスタンスを生成
		frame.defineVal(); //表示の準備
		frame.setVisible(true); //フレーム表示
	}

	private void defineVal() {//レイアウトやコンポーネントの配置を設定
		cntnr = getContentPane(); //表示領域を取得
		flow = new FlowLayout(); //設定するレイアウトのインスタンス
		cntnr.setLayout(flow); //レイアウトをフローレイアウトに
		text1 = new JTextField(20); //テキストフィールドインスタンス
		button1 = new JButton("はじめ"); //ボタン1インスタンス
		button2 = new JButton("おわり"); //ボタン2インスタンス
		//各部品を表示領域に追加
		cntnr.add(button1);
		cntnr.add(text1);
		cntnr.add(button2);
	}
}