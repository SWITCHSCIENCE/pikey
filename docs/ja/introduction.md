# keyboard

## キーボードを作る

それほど苦労せずにキーボードを作ることができた、という話を書きます。

## 出来上がるもの

USBでパソコンに繋がる普通のキーボード

注：普通と書きましたが、若干普通じゃ無いものを作ることもできます。

## 必要なもの

* キースイッチ
* キーキャップ
* コントローラーモジュール
* 基板
* ファームウエア

### キースイッチ

定番だと思われるCherry MXのキースイッチ

一般的なのは、Cherry MXもしくはその互換品。Cherry MXは1953年に創業したコンピューターの周辺機器のメーカーCherry（現在はGenui傘下）が1984年に開発したキースイッチで、現在でも生産販売されている。ただし特許の期限は切れており、異なるメーカーの互換品も流通しています。今回使っているのはGateronの赤軸です。

写真　裏と表

### キーキャップ

刻印ありなし、形状の違いなどありますが、ともかくCherry MXに取り付けられるものを用意します。。

写真　裏と表

日本だと[TALP](https://talpkeyboard.stores.jp/)で2個単位で買うことができる。

Aliexpressなら[Shenzhen YMD Tech](https://ja.aliexpress.com/store/429151)、[KBDFans](https://kbdfans.ja.aliexpress.com/store/2230037)、[kprepublic](https://kprepublic.ja.aliexpress.com/store/3034003)、[cooljazz](https://cooljazz.ja.aliexpress.com/store/1806079)などで購入できる。ただし中国からの配送には時間がかかる。

### コントローラーモジュール

SparkFunの開発したPro Microを使います。Arduinoと互換性があるボードです。ただしファームウエアの書き込みはArduino IDEなどは使いません。

スイッチサイエンスでもこのPro Microの互換品を、キーボードを自作するユーザーのために作っているのでこれを使います。

Pro Micro以外がコントローラーとして使われることもありますが、こちらも定番なので。

写真　裏と表

### 基板

キーボードの基板はKiCadなどを使って自分で設計することができます。

設計が終わったらうちでもやっている基板製造サービスを使って作ることができます。小さいものなら3000円ぐらいで済みます。

写真　裏と表

### ファームウエア

QMKというファームウエアを使います。

ファームウエアの書き込みは