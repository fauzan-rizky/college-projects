#!/bin/bash

# Script: monitor.sh
# Deskripsi: Tool sederhana untuk memantau dan mengelola process di Linux

while true; do
    echo "================================="
    echo "       PROCESS MONITOR"
    echo "================================="
    echo "1. Show all processes (q to quit)"
    echo "2. Top CPU Processes"
    echo "3. Top Memory Processes"
    echo "4. Find process by name"
    echo "5. Kill process by PID"
    echo "6. Exit"
    echo -n "Choose an option [1-6]: "
    read choice

    case $choice in
        1)
            # Menampilkan semua proses dengan format lengkap
            echo "Menampilkan semua proses..."
            ps -ef | less
            ;;
        2)
            # Menampilkan 10 proses dengan penggunaan CPU tertinggi
            echo "Top 10 Proses (Berdasarkan CPU):"
            ps -eo pid,user,%cpu,cmd --sort=-%cpu | head -10
            ;;
        3)
            # Menampilkan 10 proses dengan penggunaan Memory tertinggi
            echo "Top 10 Proses (Berdasarkan Memory):"
            ps -eo pid,user,%mem,cmd --sort=-%mem | head -10
            ;;
        4)
            # Mencari process berdasarkan nama
            echo -n "Masukkan nama process yang dicari: "
            read name
            if [ -z "$name" ]; then
                echo "Nama tidak boleh kosong."
            else
                echo "Hasil pencarian untuk '$name':"
                pgrep -a "$name"
            fi
            ;;
        5)
            # Menghentikan process berdasarkan PID
            echo -n "Masukkan PID process yang ingin dihentikan: "
            read pid
            if [ -z "$pid" ]; then
                echo "PID tidak boleh kosong."
            else
                echo "Mengirim sinyal terminasi ke PID $pid..."
                kill $pid
                echo "Process $pid telah dihentikan."
            fi
            ;;
        6)
            # Keluar dari program
            echo "Keluar dari Program..."
            exit 0
            ;;
        *)
            # Handling input yang tidak valid
            echo "Pilihan tidak valid. Silakan pilih angka 1-6."
            ;;
    esac
    
    # Memberi jeda agar output tidak langsung tertutup/berputar terlalu cepat
    echo -n "Tekan Enter untuk kembali ke menu..."
    read dummy
done
