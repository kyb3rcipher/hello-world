@extends('layouts.app')

@section('content')
    
    <a href="{{ route('posts.create') }}">New post +</a>
    <ol>
        @foreach ($posts as $post)
                                                {{-- Laravel autodetect the id --}}
            <li><a href="{{ route('posts.show', $post) }}">{{ $post -> title }}</a></li>
        @endforeach
    </ol>
    
    {{ $posts -> links() }}
@endsection