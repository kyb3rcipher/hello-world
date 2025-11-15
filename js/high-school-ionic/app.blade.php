<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Blog @yield('title', '')</title>

    <!-- CSS -->
    @stack('css')
    <!--<script src="https://cdn.tailwindcss.com"></script> {{-- Tailwind --}}-->
</head>
<body>
    <header></header>

    @yield('content')

    <footer></footer>

    @stack('js')
</body>
</html>