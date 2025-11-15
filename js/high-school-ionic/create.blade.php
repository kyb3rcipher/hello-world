@extends('layouts.app')
@section('title', 'Create post')

@section('content')
    <a href="{{ route('posts.index') }}">Back ←</a>
    
    <h1>Create new post</h1>
    
    {{-- @if ($errors->any())
        <h2>Errors:</h2>
        <ul>
            @foreach ($errors->all() as $error)
                <li>{{ $error }}</li>
            @endforeach
        </ul>
    @endif --}}

    <form method="POST" action="/posts">
        {{-- TOKEN --}}
        @csrf

        <label for="title">Title:</label> <br>
        <input type="text" name="title" id="title" value="{{ old('title') }}"> <br>
        @error('title')<p>{{ $message}} </p>@enderror

        <label for="slug">Slug:</label> <br>
        <input type="slug" name="slug" value="{{ old('slug') }}"> <br>
        @error('slug')<p>{{ $message }}</p>@enderror

        <label for="category">Category:</label> <br>
        <input type="text" name="category" id="category" value="{{ old('category') }}"> <br><br>
        @error('category')<p>{{ $message }}</p>@enderror

        <label for="content">Content:</label> <br>
        <textarea name="content" id="content" rows="10" cols="50">{{ old('content') }}</textarea> <br>
        @error('content')<p>{{ $message }}</p>@enderror

        <button>Create post</button>
    </form>
@endsection