@extends('layouts.app')

@section('content')
    <h1>Home</h1>

    <a href="{{ route('posts.index') }}">Posts</a>
@endsection