@extends('layouts.app')

@section('content')
    <h1>Home</h1>

    {{-- For traductions in /lang/*.json --}}
    {{ __('Like') }}
    <br>
    
    <a href="{{ route('posts.index') }}">Posts</a>
@endsection