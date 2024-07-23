<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Casts\Attribute;
use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Post extends Model
{
    use HasFactory;

    /*protected $fillable = [
        'title',
        'slug',
        'category',
        'content'
    ];*/
    protected $guarded = [
        'is_active'
    ];

    protected function casts(): array {
        return [
            'published_at' => 'datatime',
            'is_active' => 'boolean'
        ];
    }

    protected function title(): Attribute {
        return Attribute::make(
            set: function($value) {
                return strtolower($value);
            },
            get: function($value) {
                return ucfirst($value);
            }
        );
    }

    public function getRouteKeyName() {
        return 'slug';
    }
}
