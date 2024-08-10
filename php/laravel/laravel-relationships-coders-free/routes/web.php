<?php

use App\Models\User;
use App\Models\Phone;
use App\Models\Post;
use App\Models\Comment;
use Illuminate\Support\Facades\Route;

Route::get('/', function () {
    return view('welcome');
});

Route::get('test', function (){
   /* $user = User::where('id', 1)
        ->with('phone')
        ->first();

    //return $user->phone;
    return $user;*/
    
    $phone = Phone::find(1);

    return $phone->user;
});

Route::get('post', function (){
    $post = Post::find(1);
    
    $post->comments()->create([
        'content' => 'Test commentary'
        // The id not is necessary
    ]);

    return "Comment created";
});