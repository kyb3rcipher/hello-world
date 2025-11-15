@extends('layouts.app')
@section('title')Edit post: {{ $post -> slug }}@endsection
@section('content')
    <a href="{{ route('posts.show', $post) }}">Back ←</a>
        
    <h1>Edit post</h1>
    <form method="POST" action="{{ route('posts.update', $post) }}">
        @csrf
        @method('PUT')

        <ul>
            @foreach ($errors->all() as $error)
                <li>{{ $error }}</li>   
            @endforeach
        </ul>
        <label for="title">Title:</label> <br>
        <input type="text" name="title" id="title" value="{{ old('title', $post -> title) }}"> <br>
        @error('title')<p>{{ $message }}</p>@enderror
        
        <label for="slug">Slug:</label> <br>
        <input type="text" name="slug" id="slug" value="{{ old('slug', $post -> slug) }}"> <br>
        @error('slug')<p>{{ $message }}</p>@enderror

        <label for="category">Category:</label> <br>
        <input type="text" name="category" id="category" value="{{ $post -> category }}"> <br><br>
        @error('category'){{ $message }}@enderror

        <label for="content">Content:</label> <br>
        <textarea name="content" id="content" rows="10" cols="50">{{ old('content', $post -> content) }}</textarea> <br>
        @error('content')<p>{{ $message }}</p>@enderror

        <button>Update post</button>
    </form>
@endsection