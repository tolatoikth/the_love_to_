<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Chúc vợ Trang Ngủ Ngon ❤️</title>
    <style>
        /* Thiết lập bầu trời đêm bằng gradient màu */
        body {
            margin: 0;
            padding: 0;
            height: 100vh;
            background: linear-gradient(to bottom, #020111 10%, #20124d 100%);
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            color: white;
            font-family: 'Arial', sans-serif;
            overflow: hidden; /* Ẩn thanh cuộn */
            position: relative;
        }

        /* Hiệu ứng chữ phát sáng và nhịp đập */
        h1 {
            font-size: 3rem;
            text-shadow: 0 0 10px #fff, 0 0 20px #fff, 0 0 30px #ff66b2;
            animation: pulse 2s infinite;
            z-index: 10;
            text-align: center;
            margin: 10px 0;
        }

        p {
            z-index: 10;
            font-size: 1.2rem;
            color: #d1d1d1;
            font-style: italic;
        }

        /* Hiệu ứng mặt trăng trôi bồng bềnh */
        .moon {
            font-size: 5rem;
            margin-bottom: 10px;
            animation: float 3s ease-in-out infinite;
            z-index: 10;
        }

        /* Khung hình (Keyframes) cho các hoạt ảnh */
        @keyframes pulse {
            0% { transform: scale(1); }
            50% { transform: scale(1.05); }
            100% { transform: scale(1); }
        }

        @keyframes float {
            0% { transform: translateY(0); }
            50% { transform: translateY(-20px); }
            100% { transform: translateY(0); }
        }

        /* CSS cho các ngôi sao */
        .star {
            position: absolute;
            background: white;
            border-radius: 50%;
            animation: twinkle infinite alternate;
        }

        @keyframes twinkle {
            0% { opacity: 0.1; }
            100% { opacity: 1; text-shadow: 0 0 5px #fff; }
        }
    </style>
</head>
<body>

    <!-- Nội dung chính -->
    <div class="moon">🌙</div>
    <h1>Chúc Ngọc ngủ ngon! ❤️</h1>
    <p>Mơ thật đẹp nhé!</p>

    <!-- Script tạo sao lấp lánh ngẫu nhiên -->
    <script>
        function createStars() {
            const count = 150; // Số lượng ngôi sao
            const body = document.querySelector('body');
            
            for (let i = 0; i < count; i++) {
                const star = document.createElement('div');
                star.classList.add('star');
                
                // Tạo vị trí ngẫu nhiên trên màn hình
                const x = Math.floor(Math.random() * window.innerWidth);
                const y = Math.floor(Math.random() * window.innerHeight);
                
                // Tạo kích thước ngẫu nhiên cho sao
                const size = Math.random() * 3;
                
                // Thời gian nhấp nháy ngẫu nhiên
                const duration = Math.random() * 2 + 1;

                // Áp dụng CSS
                star.style.left = x + 'px';
                star.style.top = y + 'px';
                star.style.width = size + 'px';
                star.style.height = size + 'px';
                star.style.animationDuration = duration + 's';

                body.appendChild(star);
            }
        }
        
        // Gọi hàm để vẽ sao khi tải trang
        createStars();
    </script>
</body>
</html>
