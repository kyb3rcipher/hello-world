<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Phone extends Model
{
    use HasFactory;

    protected $fillable = ['number', 'user_id'];

    // Inverse relation (One To One)
    public function user() {
        return $this->belongsTo(User::class);
    }
}
