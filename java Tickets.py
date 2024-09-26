import time
import os

script_path = os.path.abspath(__file__)
current_working_directory = os.getcwd()

def main():
    print(f"{current_working_directory}\\java Tickets")
    print("欢迎使用余胜军抢票神器V6.0版本")
    print("该技术由余胜军IT教学网站提供-余胜军徒儿制作")
    print("请输入抢票地址：")
    time.sleep(3)
    print("地址为：******************")
    print("正在开启多线程抢票中..")
    time.sleep(1)
    print("读取票信息成功")
    time.sleep(1)
    print("正在解析json")
    time.sleep(1)
    print("开启多线程1抢票中")
    time.sleep(0.5)
    print("开启多线程2抢票中")
    time.sleep(0.5)
    print("开启多线程3抢票中")
    time.sleep(0.5)
    print("开启多线程4抢票中")
    time.sleep(0.5)
    print("开启多线程5抢票中")
    time.sleep(0.5)
    print("开启多线程6抢票中")
    time.sleep(0.5)
    print("开启多线程7抢票中")
    time.sleep(0.5)
    print("开启多线程8抢票中")
    time.sleep(0.5)
    print("开启多线程9抢票中")
    time.sleep(0.5)
    print("开启多线程10抢票中")
    time.sleep(1.5)
    print("主线路忙，切换线路中：1")
    time.sleep(0.5)
    print("主线路忙，切换线路中：2")
    time.sleep(0.5)
    print("主线路忙，切换线路中：3")
    time.sleep(0.5)
    print("主线路忙，切换线路中：4")
    time.sleep(0.5)
    print("主线路忙，切换线路中：5")
    time.sleep(0.5)
    print("抢票成功，订单编号为：2024923111165217891")
    print("欢迎您下次继续使用余胜军抢票神器")

if __name__ == "__main__":
    while True:
        main()
        if input().strip()!="":
         if input().strip()== "\x1b":
            break
