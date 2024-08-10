<?php

namespace App\Http\Controllers;

use App\Http\Requests\StorePostRequest;
use App\Mail\PostCreateMail;
use App\Models\Post;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Mail;

class PostController extends Controller
{
    public function index() {
        $posts = Post::orderBy('id', 'desc')->paginate(10);
        return view('posts.index', compact('posts'));
    }

    public function show(Post $post) {
        //$post = Post::find($post);
        return view('posts.show', compact('post'));
    }

    public function create(Post $post) {
        return view('posts.create', compact('post'));
    }
    public function store(StorePostRequest $request) {
        /*$post = new Post();
        $post->title = $request->title;
        $post->slug = $request->slug;
        $post->category = $request->category;
        $post->content = $request->content;
        $post->save();*/

        // https://laravel.com/docs/11.x/validation#available-validation-rules
        /*$request->validate([
            'title' => 'required|min:5|max:255',
            'slug' => ['required', 'unique:posts', 'min:5', 'max:255'],
            'category' => 'required|min:5|max:255',
            'content' => 'required'
        ]);*/

        $post = Post::create($request->all());

        //Mail::to('test@test.com')->send(new PostCreateMail($post));

        return redirect("/posts");
    }

    public function edit(Post $post) {
        return view('posts.edit', compact('post'));
    }
    public function update(Request $request, Post $post) {
        /*$post->title = $request->title;
        $post->category = $request->category;
        $post->content = $request->content;
        $post->save();*/
        $request->validate([
            'title' => 'required|min:5|max:255',
            'slug' => "required|unique:posts,slug,$post->id|min:5|max:255",
            'category' => 'required|min:5|max:255',
            'content' => 'required',
        ]);
        $post->update($request->all());
        
        return redirect("/posts/$post->slug");
    }

    public function destroy(Post $post) {
        //$post = Post::find($post);
        $post->delete();

        return 'Post "' . $post -> slug . '" ELIMINADO <br>
            <a href="' . route('posts.index') . '">Back ←</a>';
    }
}
