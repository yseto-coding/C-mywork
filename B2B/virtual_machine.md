仮想マシンとは仮想化によりコンピュータ上に立ち上げられた仮想的なコンピュータのこと。
基本的にコンピュータは一つのOSによって起動され、このような物理的なコンピュータを起動するOSをホストOSと呼ぶ。
仮想マシンはソフトウェアによって仮想的なコンピュータを作成することができ、その中で別のOSやアプリケーションを動作させることができる。

〜仮想マシンのメリット〜
アプリケーションやシステムのテストや開発において、異なる環境を構築することができる。また仮想マシンツールの機能によって仮想マシンデータをエクスポート（外部への変換/取り出し）することで、開発チームで環境の共有が可能になる。
仮想マシンはファイルとして保存されるため、バックアップや復元が簡単に行える。


関連用語
boot(ブート)：コンピュータやデバイスの電源を入れてから、OSが起動して使える状態になるまでの一連の処理のこと。
語源はbootstrapping = 「ブーツの紐を引っ張って立ち上がること」

〜ブートの流れ〜
1.電源ON
・ハードウェアに電力が供給される。

2.BIOS/UEFI実行
・基本的なハードウェアチェック（メモリ、キーボードなど）。
・「どこからOSを読み込むか」を判断
BIOS/UFEIとはコンピュータの基本的な制御を行うソフト（ハードウェア起動前の設定）

3.ブートローダー起動
・OSを読み込むための小さなプログラム（例：GRUB）
ブートローダーとはOSを見つけて起動する小さなプログラムのこと

4.OSのカーネル読み込み
・OSの中心部（Linuxカーネルなど）がメモリに読み込まれる。
カーネルとはOSの中核部分であり、ハードウェアとアプリの仲介をする。

5.OS起動完了
・ログイン画面やデスクトップが表示される。
