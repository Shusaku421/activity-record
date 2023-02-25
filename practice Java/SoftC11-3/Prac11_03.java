
//AWTのクラス
import java.awt.Container;

//Swingのクラス
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;

public class Prac11_03 extends JFrame {//JFrameを継承
	private Container cntnr; //フレームの表示領域

	//コンポーネント
	private JComboBox<String> cmbBox; //コンボボックス
	private JButton yes, no; //ボタン
	private JLabel label1, label2, label3, label4, label5; //ラベル
	private JCheckBox chkBox1, chkBox2, chkBox3, chkBox4;//チェックボックス
	private JRadioButton rbtn1, rbtn2, rbtn3;//ラジオボタン

	Prac11_03(String title) {//コンストラクタでフレーム設定
		super(title); //タイトルの設定
		setBounds(200, 200, 450, 300); //位置とサイズの設定
		setDefaultCloseOperation(EXIT_ON_CLOSE);//フレームを閉じたらプログラム終了
	}

	public static void main(String[] args) {//メインメソッド
		Prac11_03 frame = new Prac11_03("Prac11_03");//自クラスのインスタンスを生成
		frame.defineVal(); //表示の準備
		frame.setVisible(true); //フレーム表示
	}

	private void defineVal() {//レイアウトやコンポーネントの配置を設定
		cntnr = getContentPane(); //表示領域を取得
		cntnr.setLayout(null);//レイアウト設定
		//ラベルの設定
		label1 = new JLabel("ソフトウェア演習C第11回自由課題");//ラベル1
		label1.setBounds(0, 0, 425, 15);//ラベル1の配置位置
		label2 = new JLabel("一つ選択");//ラベル2
		label2.setBounds(0, 40, 225, 15);//ラベル2の配置位置
		label3 = new JLabel("一つ選択");//ラベル3
		label3.setBounds(70, 76, 225, 15);//ラベル3の配置位置
		label4 = new JLabel("複数選択可");//ラベル4
		label4.setBounds(360, 40, 70, 15);//ラベル4の配置位置
		label5 = new JLabel("確認しましたか?");//ラベル5
		label5.setBounds(85, 240, 100, 15);//ラベル5の配置位置
		//ボタンの設定
		yes = new JButton("はい");//はいボタン
		yes.setBounds(190, 236, 65, 25);//はいボタンの配置位置
		no = new JButton("いいえ");//いいえボタン
		no.setBounds(260, 236, 73, 25);//いいえボタンの配置位置
		//チェックボックスの設定
		chkBox1 = new JCheckBox("選択肢1", false);//チェックボックス1
		chkBox1.setBounds(360, 91, 90, 15);//チェックボックス1の配置位置
		chkBox2 = new JCheckBox("選択肢2", false);//チェックボックス2
		chkBox2.setBounds(360, 130, 90, 15);//チェックボックス2の配置位置
		chkBox3 = new JCheckBox("選択肢3", false);//チェックボックス3
		chkBox3.setBounds(360, 175, 90, 15);//チェックボックス3の配置位置
		chkBox4 = new JCheckBox("選択肢4", false);//チェックボックス4
		chkBox4.setBounds(360, 215, 90, 15);//チェックボックス4の配置位置
		//ラジオボタンの設定
		rbtn1 = new JRadioButton("選択肢1", false);//ラジオボタン1
		rbtn1.setBounds(0, 100, 70, 15);//ラジオボタン1の配置位置
		rbtn2 = new JRadioButton("選択肢2", false);//ラジオボタン2
		rbtn2.setBounds(0, 150, 70, 15);//ラジオボタン2の配置位置
		rbtn3 = new JRadioButton("選択肢3", false);//ラジオボタン3
		rbtn3.setBounds(0, 200, 70, 15);//ラジオボタン13の配置位置
		//コンボボックスの設定
		cmbBox = new JComboBox<>();//コンボボックス
		cmbBox.addItem("選択肢1");//コンボボックスに追加
		cmbBox.addItem("選択肢2");//コンボボックスに追加
		cmbBox.addItem("選択肢3");//コンボボックスに追加
		cmbBox.setBounds(70, 132, 285, 100);//コンボボックスの配置位置

		//各部品を表示領域に追加
		cntnr.add(label1);
		cntnr.add(label2);
		cntnr.add(label3);
		cntnr.add(label4);
		cntnr.add(label5);
		cntnr.add(rbtn1);
		cntnr.add(rbtn2);
		cntnr.add(rbtn3);
		cntnr.add(cmbBox);
		cntnr.add(yes);
		cntnr.add(no);
		cntnr.add(chkBox1);
		cntnr.add(chkBox2);
		cntnr.add(chkBox3);
		cntnr.add(chkBox4);
	}

}
