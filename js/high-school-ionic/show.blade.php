@extends('layouts.app')
@section('title', $post -> id)
@section('content')
    <a href="{{ route('posts.index') }}">Back ←</a>
    <h1>{{ $post -> title }}</h1>
    <p><strong>Category:</strong> <i>{{ $post -> category }}</i></p>

    <p>
        {{ $post -> content }}
    </p>

    <a href="{{ route('posts.edit', $post) }}">Edit post ✏️</a>
    <form method="POST" action="{{ route('posts.destroy', $post) }}">
        @csrf
        @method('DELETE')
        <button>Delete post 🗑️</button>
    </form>
@endsection