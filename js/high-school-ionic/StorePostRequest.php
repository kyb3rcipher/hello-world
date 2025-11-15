<?php

namespace App\Http\Requests;

use Illuminate\Foundation\Http\FormRequest;

class StorePostRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     */
    public function authorize(): bool
    {
        return true;    // Temporal for accept authorize all users
    }

    /**
     * Get the validation rules that apply to the request.
     *
     * @return array<string, \Illuminate\Contracts\Validation\ValidationRule|array<mixed>|string>
     */
    public function rules(): array
    {
        return [
            'title' => 'required|min:5|max:255',
            'slug' => ['required', 'unique:posts', 'min:5', 'max:255'],
            'category' => 'required|min:5|max:255',
            'content' => 'required'
        ];
    }

    /*public function messages() {
        return [
            'title.required' => 'The :attribute field is required. (edited)'
        ];
    }

    public function attributes() {
        return [
            'title' => 'name'
        ];
    }*/
}
