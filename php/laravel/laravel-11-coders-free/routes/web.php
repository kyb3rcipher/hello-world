<?php

use App\Http\Controllers\HomeController;
use App\Http\Controllers\PostController;
use Illuminate\Support\Facades\Route;

Route::get('/', HomeController::class);
Route::resource('posts', PostController::class);
/*  ->except(['destroy', 'edit']
    ->only('index', 'create', 'store')
    ->names('posts') URI NAME)
    ->parameters(['articles' => 'post')*/

// IDK WHAT IS THIS
//Route::apiResource('posts', PostController::class);

/*
Route::get('/posts', [PostController::class, 'index'])
    ->name('posts.index'); /* URI NAME 

    Route::get('/post/{post}/{category?}', [PostController::class, 'show'])
    ->name('posts.show');

Route::get('/posts/create', [PostController::class, 'create'])
    ->name('posts.create');
Route::post('/posts', [PostController::class, 'store'])
    ->name('/posts.store');

Route::get('/posts/{post}/edit', [PostController::class, 'edit'])
    ->name('posts.edit');
Route::put('/posts/{post}', [PostController::class, 'update'])
    ->name('posts.update');

Route::delete('/posts/{post}/delete', [PostController::class, 'destroy'])
    ->name('posts.destroy');
*/