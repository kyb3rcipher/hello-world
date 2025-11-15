<?php

namespace Database\Seeders;

use App\Models\User;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;

class UserSeeder extends Seeder
{
    public function run(): void
    {
        $user = new User();
        $user->name = 'admin';
        $user->email = 'admin@kyb3rcipher.com';
        $user->password = bcrypt('admin');
        $user->save();

        $user = new User();
        $user->name = 'kyb3r';
        $user->email = 'kyb3r@kyb3rcipher.com';
        $user->password = bcrypt('kyb3r');
        $user->save();

        User::factory(10)->create();
    }
}
